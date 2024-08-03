#include <iostream>

int beauty_substr(string s){
    for(int i=0;i<s.size();i++){
        map<char,int>mpp;
        fosr(int j=i;j<s.size();j++){
            mpp[s[j]]++;
        
        int maxii=INT_MIN;
        int minii=INT_MAX;
        for(auto it:mpp){
            maxii=max(maxii,it.second);
            minii=min(minii,it.second);
        }
        ans+=maxii-minii;
        }
    }
    return ans;

}

