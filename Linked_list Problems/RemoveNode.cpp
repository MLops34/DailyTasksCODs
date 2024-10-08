ListNode* RemoveNthNodeFrom(ListNode *head,int n){
Node* fastp = head;
    Node* slowp = head;
    for (int i = 0; i < N; i++)
        fastp = fastp->next;
    if (fastp == NULL)
        return head->next;
    while (fastp->next != NULL) {
        fastp = fastp->next;
        slowp = slowp->next;
    }
    Node* delNode = slowp->next;
    slowp->next = slowp->next->next;
    delete delNode;
    return head;
}