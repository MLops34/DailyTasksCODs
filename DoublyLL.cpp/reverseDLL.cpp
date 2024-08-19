class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        if(head==NULL||head->next==NULL){
            return head;
        }
        //Your code here
        Node * current=head;
        Node * temp=NULL;
        
        
        while(current!=NULL){
            temp=current->prev;
            current->prev=current->next;
            current->next=temp;
            current=current->prev;
        }
        return temp->prev;
    
    }
};