class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l = 0, r = 0;
        long long sum = 0, maxi = 0;
        unordered_map<int, int> mpp;

        while (r < nums.size()) {
            mpp[nums[r]]++;
            sum += nums[r];

            if (r - l + 1 > k) {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0) {
                    mpp.erase(nums[l]);
                }
                sum -= nums[l];
                l++;
            }

            if (r - l + 1 == k && mpp.size() == k) {
                maxi = max(maxi, sum);
            }

            r++;
        }

        return maxi == 0 ? 0 : maxi;
    }
};