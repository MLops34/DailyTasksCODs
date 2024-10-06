class Solution {
public:
    long long dividePlayers(vector<int >& skill) {
        if(skill.size()%2!=0) return -1;
        sort(skill.begin(),skill.end());
        long long int  curr_sum=0,total=0,n=skill.size();
        long long int  targ=skill[0]+skill[n-1];
        for(long long int  i=0;i<n/2;i++){
            curr_sum=skill[i]+skill[n-1-i];
            if(curr_sum!=targ) return -1;

            total=total+skill[i]*skill[n-1-i];
        }
       return total;
    }
};