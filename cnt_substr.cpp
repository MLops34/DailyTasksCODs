 #include <iostream>
 
 
 long long int substrCount (string s, int k) {
        int cnt=0;
        unordered_map<char,int>map;
        for(int i=0;i<s.size();i++){
            map.clear();
            for(int j=i;j<s.size();j++){
                map[s[j]]++;
                if(map.size()==k){
                    cnt++;
                }
            }
        }
        return cnt;
    }