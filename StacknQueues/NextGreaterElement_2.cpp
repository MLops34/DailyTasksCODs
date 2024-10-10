Approach- Iterate using two loops as such that double array virtually and find virtual index such that that particular ind >i if it is simply add it to array then break ;;until i>0 till N

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int ind=0;
        vector<int>NGE(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<=i+nums.size()-1;j++){
                ind=j % nums.size();
                if(nums[ind]>nums[i]){
                    NGE[i]=nums[ind];
                    break;
                }
            }
        }
        return NGE;
    }
};