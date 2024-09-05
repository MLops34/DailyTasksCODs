class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rsum=0,lsum=0,maxsum=0,rindex=cardPoints.size()-1;
        for(int i=0;i<=k-1;i++){
            lsum+=cardPoints[i];
            maxsum=lsum;
        }
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[rindex];
            rindex--;
            maxsum=max(maxsum,rsum+lsum);
        }
        return maxsum;
        
    }
};