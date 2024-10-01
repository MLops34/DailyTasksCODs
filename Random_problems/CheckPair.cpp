class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int sum=0;bool ans=true;
        int l=0,r=arr.size()-1;
        while(l<r){
            sum=arr[l]+arr[r];
            l++;
            r--;
            if(sum%k==0){
                ans=true;
            }
            else{
                ans=false;
            }
        }
        return ans;
        
    }
};