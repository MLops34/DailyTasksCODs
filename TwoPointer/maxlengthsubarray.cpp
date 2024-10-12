class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> mpp;
        int r=0,l=0,maxi=0;
        while(r<nums.size()){
            mpp[nums[r]]++;

            while(mpp[nums[r]]>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};