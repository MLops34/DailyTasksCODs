class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1;
        for(int i=0;i<s.size();i++){
            if (!s1.empty() && s1.top() == s[i]){
                s1.pop();
            }else{
                s1.push(s[i]);
            }
        }
        string result="";
        while(!s1.empty()){
            result=s1.top()+result;
            s1.pop();
        }
        return result;

    }
};