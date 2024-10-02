


int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if ((c=='/')||(c=='*')) return 2;
    else if ((c=='+')||(c=='-')) return 1;
    else return -1;
}



string infixToprefix(string input){
    stack<int> st;
    string s=reverse(input.begin(),input.end());
    int i=0; string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') s[i]=')';
        if(s[i]==')') s[i]='(';
    }
    while(i<input.size()){
        if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a' && s[i]<='z')||s[i]>='0'&&s[i]<='9'){
            ans=ans+s[i];
        }
        else if (s[i]=='('){
            st.push(s[i]);
        }
        else if (s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans=ans+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(s[i]=='^'){
                while(!st.empty() && prec(s[i])<=prec(s[i])){
                    ans=ans+st.top();
                    st.pop();
                }
            }
            else{
                while(!st.empty() && prec(s[i])<prec(s[i])){
                    ans=ans+st.top();
                    st.pop();
                }
                st.pop();
            }
        }
        i++;
    }
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    return ans;
}