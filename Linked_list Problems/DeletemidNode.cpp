class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode *temp=head,*midnode=NULL;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mid=cnt/2;
        temp=head;
        while(temp!=NULL){
            mid--;
            if(mid==0){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;

        
    }
};