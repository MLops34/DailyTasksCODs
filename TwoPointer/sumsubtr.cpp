class Solution {
public:
    long long appealSum(string s) {
        long long cnt=0;
        vector<int>hash(26);
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                cnt+=hash[s[j]-'a']++;
                      
            }
        }
        return cnt;
        
    }
};