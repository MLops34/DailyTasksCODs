class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode *l=NULL,*r=NULL,*Next=NULL;
        ListNode* prev=NULL;
        int i=1;
        while(i<left){
            prev=temp;
            temp=temp->next;
            i++;
        }
        l=temp;
        while(i<right){
            temp=temp->next;
            i++;
        }
        r =  temp;
        if(temp->next){
            Next=temp->next;
        }
        if(prev!=NULL){
            prev->next=r;
        }
        else
        {
            head=r;
        }
        temp=l;
        while(temp!=Next){
            ListNode *x=temp->next;
            temp->next=prev;
            prev=temp;
            temp=x;
        }
        l->next=Next;
        return head;
        
    }
};