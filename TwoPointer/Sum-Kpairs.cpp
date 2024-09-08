#include <iostream>
#include <vector>
#include <algorithm>

int maxOperations(std::vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end());
    int r = 0;
    int l = nums.size() - 1;
    int ops = 0;

    while (r < l) {
        int sum = nums[r] + nums[l];
        if (sum == k) {
            ops++;
            r++;
            l--;
        } else if (sum < k) {
            r++;
        } else {
            l--;
        }
    }

    return ops;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 3, 2, 4};
    int k = 6;
    std::cout << "Maximum number of operations: " << maxOperations(nums, k) << std::endl;
    return 0;
}
