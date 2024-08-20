ListNode* swapPairs(ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    ListNode *temp=head,*afterhead=NULL,*prev=NULL;
    while(temp!=NULL && temp->next!=NULL){
        afterhead=temp->next;
        temp->next=afterhead->next;
        afterhead->next=temp;
        if(prev!=NULL) prev->next=afterhead;
        else head=afterhead;
        prev=temp;
        temp=temp->next;
    }
    return head;
}