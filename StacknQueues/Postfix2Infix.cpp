class Solution {
  public:
    string postToInfix(string s) {
        // Write your code here
        int i=0,n=s.size();
        stack <string> st;
        while(i<n){
            if((s[i]>='A' && s[i]<='Z')||
            (s[i]>='a' && s[i]<='z')||
            (s[i]>='0' && s[i]<='9')){
                st.push(string(1,s[i]));
            }
            else{
                string t1,t2;
                t1=st.top();
                st.pop();
                t2=st.top();
                st.pop();
                st.push("("+t2 + s[i] + t1 + ")");
            }
            i++;
        }
        return st.top();
    }
};