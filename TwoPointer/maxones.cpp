class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,zeros=0,len=0,maxi=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
               
            }
            if(zeros<=k){
                len=r-l+1;
                maxi=max(maxi,len);
            }
            r++;
        }
        return maxi;
        
    }
};