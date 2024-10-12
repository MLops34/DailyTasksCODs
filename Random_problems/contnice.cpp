class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        int oddCount = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 != 0) {
                oddCount++;
            }
            
            while (oddCount > k) {
                if (nums[left] % 2 != 0) {
                    oddCount--;
                }
                left++;
            }
            
            if (oddCount == k) {
                count++;
                int tempLeft = left;
                while (tempLeft < right && nums[tempLeft] % 2 == 0) {
                    tempLeft++;
                    count++;
                }
            }
        }
        
        return count;
    }
};