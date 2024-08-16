/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prev1=nullptr,*prev2=nullptr;
        ListNode *front=l1;
        ListNode *temp1=l1;
        ListNode *temp2=l2;

        while(temp1){
            front=temp1->next;
            temp1->next=prev1;
            prev1=temp1;
            temp1=front;
        }
        temp1=prev1;
         while(temp2){
            front=temp2->next;
            temp2->next=prev2;
            prev2=temp2;
            temp2=front;
        }
        temp2=prev2;
        int sum=0,carry=0;
        ListNode *dum=new ListNode(-1);
        ListNode *current=dum;

        while(temp1||temp2){
            sum=carry;
            if(temp1){
                sum+=temp1->val;
            }
            if(temp2){
                sum+=temp2->val;
            }
            ListNode *newNode=new ListNode(sum%10);
            carry=sum/10;
            current->next=newNode;
            current=current->next;
            


            if(temp1) {temp1=temp1->next;}
            if(temp2) {temp2=temp2->next;}
        }
        if(carry){
            ListNode *newn=new ListNode(carry);
            current->next=newn;
        }
        
        ListNode *newhead=dum->next;
        ListNode *x=newhead,*prev3=nullptr;
        while(x){
            front=x->next;
            x->next=prev3;
            prev3=x;
            x=front;
        }
        return prev3;
        

    }
};