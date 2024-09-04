class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            vector<int>hash(3);
            for(int j=i;j<s.size();j++){
                hash[s[j]-'a']++;
                if(hash[0]>0&&hash[1]>0&&hash[2]>0){
                cnt++;
            }
           
            }
        }
        return cnt;
        
    }
};