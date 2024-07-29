 bool areKAnagrams(string str1, string str2, int k) {
        if(str1.size()!=str2.size()) return false;
        
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        int cnt=0;
        
        for(int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i]){
                cnt++;
            }
        }
        return cnt<=k;