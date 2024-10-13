class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0,r=0,cnt=0,maxvowel=0,maxi=0;
        while(r< s.size()){
            cnt++;
            if ( (s[r]=='a')||(s[r]=='e')||(s[r]=='i')||(s[r]=='o')||(s[r]=='u') ){
                maxvowel++;
            }
            if(cnt>k){
                if ( (s[l]=='a')||(s[l]=='e')||(s[l]=='i')||(s[l]=='o')||(s[l]=='u') ){
                    maxvowel--; 
                }
                cnt--;
                l++;
            }
            maxi=max(maxi,maxvowel);
            r++;
        }
        return maxi;
    }
};