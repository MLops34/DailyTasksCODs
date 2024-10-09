class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {       //unordered map to store greater num wrt element
        //stack store the top right greater number
        unordered_map<int,int>mp;
        stack<int>s;
        for(int i = nums2.size()-1 ; i>=0 ; i--){
            //in right any number is greater than curr number or not.
            while(!s.empty() && s.top()<nums2[i]) {s.pop();}
           if(s.empty()) {
                mp[nums2[i]] = -1;
               
            }
         else   if(!s.empty() && s.top()>nums2[i]) {
                mp[nums2[i]] = s.top();
                
         }
         //either empty or smaller push number into stack
          s.push(nums2[i]);
      }
      //acc to nums1 element extract value from map
      vector<int>ans;
      for(int i = 0 ; i< nums1.size(); i++){
        ans.push_back(mp[nums1[i]]);
      }
      return ans;
    }
};