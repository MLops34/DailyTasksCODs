class Solution {
public:
    int characterReplacement(string s, int k) {
        int chan=0,len=0,maxi=0;
        for(int i=0;i<s.size();i++){
             int hash[26]={0};
            for(int j=i;j<s.size();j++){
                hash[s[j]-'A']++;
                maxi=max(maxi,hash[s[j]-'A']);
                chan=(j-i+1)-maxi;
                if(chan<=k){
                    len=max(len,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return len;
    }
};