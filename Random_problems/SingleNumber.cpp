class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int x=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto  i=mpp.begin();i!=mpp.end();i++){
            if(i->second==1){
                return i->first;

                break;
            }
        }
        return -1;
    }
};