class Solution {
public:
    string decodeString(string s) {
        stack<int>count;
        stack<string>strstack;
        int num=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                num=num*10+s[i]-'0';
            }
            else if (s[i]=='['){
                strstack.push(ans);
                ans="";
                count.push(num);
                num=0;
            }
            else if (s[i]==']'){
                string temp=ans;
                ans=strstack.top();
                strstack.pop();
                int x=count.top();
                count.pop();
                while(x--){
                    ans=ans+temp;
                }
            }
            else{
                ans=ans+s[i];
            }
        }
        return ans;
    }
};