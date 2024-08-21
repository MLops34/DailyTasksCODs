class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy=new ListNode(0);
        ListNode *current=dummy;

        vector<int>result;
        while(list1){
            result.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            result.push_back(list2->val);
            list2=list2->next;
        }
        sort(result.begin(),result.end());

        for(int i=0;i<result.size();i++){
            current->next=new ListNode(result[i]);
            current=current->next;
        }
        return dummy->next;

        
    }
};