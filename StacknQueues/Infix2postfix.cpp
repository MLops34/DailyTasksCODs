int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

 string infixToPostfix(string s) {
        // Your code here
        stack <int> st;
        int i=0;string ans="";
        while(i< s.size()){
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                ans+=s[i];
            }
            else if (s[i]=='('){
                st.push(s[i]);
            }
            else if (s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && prec(s[i])<=prec(st.top())){
                    ans+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while( !st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }