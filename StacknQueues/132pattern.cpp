// BRute force

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //bruteforce

        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[j]>nums[i]){
                    for(int k=j+1;k<n;k++){
                        if(i<j<k && nums[k]<nums[j] && nums[k]>nums[i]){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};


// BETTER APPROACH---O(N^2)

class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        int mini=nums[0];
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            mini=min(mini,nums[i]);
            for(int j=i+1;j<n;j++){
                if(mini<nums[j] && nums[j]<nums[i]){
                    return true;
                }
            }
        }
        return false;
    }
};


// OPTIMAL USING STACK-O(N)<--T/n;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        stack<int>st;
        int mini=INT_MIN;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(mini>nums[i]) return true;

            while(!st.empty() && st.top()<nums[i]){
                mini=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};