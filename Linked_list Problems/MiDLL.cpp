class Solution {
public:
    int size(ListNode*head){
        int cnt=0;
        while(head!=nullptr){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int length=size(head);
        int mid=length/2;
        
        ListNode* temp=head;
        for(int i=1;i<=mid;i++){
            temp=temp->next;
        }
        return temp;
    }
};