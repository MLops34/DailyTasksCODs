class Solution {
public:
   int minOperations(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        vector<int> vec(s.begin(), s.end());
        int res = n;
        for (int i = 0; i < vec.size(); i++) {
            int target = vec[i] + n - 1;
            int idx = binarySearch(vec, target);
            int count = idx - i + 1;
            res = min(res, n - count);
        }
        return res;
    }

    int binarySearch(vector<int>& vec, int target) {
        int left = 0, right = vec.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (vec[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
};