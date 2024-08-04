#include <iostream>

// T/C-N^2(LoG N) S/C-0(N*(N+1))/2
 int rangeSum(vector<int>& nums, int n, int left, int right) {
        long long sum=0,result=0;
        long long  size=n*(n+1)/2;
        int index=0;
        vector<int>temp(size);
        for(long long i=0;i<n;i++){
            sum=0;
            for(long long j=i;j<n;j++){
                sum+=nums[j];
                temp[index++]=sum;
            }
        }
        sort(temp.begin(),temp.end());
        for(long long k=left-1;k<right;k++){
            result+=temp[k];
        }
        return result%1000000007;
    }