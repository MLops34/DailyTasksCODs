class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>result;
        ListNode *temp=head;
        int cnt=0;
        int sum=0,x=0,maxi=0;
        while(temp){
            result.push_back(temp->val);
            temp=temp->next;
            cnt++;
        }
        for(int i=0;i<=(cnt/2-1);i++){
            x=cnt-i-1;
            sum=result[i]+result[x];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};