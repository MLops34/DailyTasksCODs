class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>arr;
        int i=0;
        ListNode *temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        while(i<arr.size()&& temp){
            temp->val=arr[i];
            temp=temp->next;
            i++;
        }
        return head;
         
    }
};