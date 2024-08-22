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
    ListNode *reverse(ListNode * head){
        ListNode *temp=head,*front=NULL,*prev=NULL;
        while(temp){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        temp=prev;
        return temp;
    }
    ListNode *findkth(ListNode *temp,int k){
        int cnt=0;
        while(temp){
            cnt++;
            if(cnt==k){
                return temp;
            }
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head,*nextNode=NULL,*rev=NULL;
        while(temp){
            ListNode *kthNode=findkth(temp,k);
            if(kthNode==NULL){
                if(rev) rev->next=temp;
                break;
            }
            nextNode=kthNode->next;
            kthNode->next=NULL;
            reverse(temp);

            if(temp==head){
                head=kthNode;
            }
            else
            {
                rev->next=kthNode;
            }
            rev=temp;
            temp=nextNode;
        }
        return head;  
    }
};