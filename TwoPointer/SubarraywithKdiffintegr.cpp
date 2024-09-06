int atMostKDistinct(const vector<int>& nums, int k) {
    unordered_map<int, int> count;
    int left = 0, right = 0, result = 0, distinct = 0;

    while (right < nums.size()) {
        if (count[nums[right]] == 0) {
            distinct++;
        }
        count[nums[right]]++;
        right++;

        while (distinct > k) {
            count[nums[left]]--;
            if (count[nums[left]] == 0) {
                distinct--;
            }
            left++;
        }

        result += right - left;
    }

    return result;
}

int subarraysWithKDistinct(const vector<int>& nums, int k) {
    return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
}