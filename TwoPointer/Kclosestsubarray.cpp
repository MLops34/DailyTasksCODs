class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> result;
        int left = 0, right = arr.size() - k;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1;
            } else if (x - arr[mid] <= arr[mid + k] - x) {
                right = mid;
            }
        }
        for (int i = left; i < left + k; i++) {
            result.push_back(arr[i]);
        }
        return result;
    }
};

int main(){
    int k = 4, x = 3;
    vector <int> arr = {1, 2, 3, 4, 5};
    vector <int> answer = findClosestElements(arr, k, x);
    // Print the result
    for (int num : answer) {
        cout << num << " ";
    }
    return 0;
}