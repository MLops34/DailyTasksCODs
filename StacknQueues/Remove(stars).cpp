// For STACK BASED APPROACH HAVING DESCENT MEMORY
// SECOND SOLUTION FOR LOOPS APPROACH

class Solution {
public:
    string removeStars(string s) {
        stack<char >st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
            if(st.top()=='*'){
                st.pop();
                st.pop();
            }
        }
        string result="";
        while(!st.empty()){
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};

class Solution {
public:
    string removeStars(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(!result.empty()) {
                    result.pop_back();
                }
                }
                else{
                    result.push_back(s[i]);
                }
            
        }
        return result;
    }
};