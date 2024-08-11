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
    bool isPalindrome(ListNode* head) {
        vector<int>array;
        ListNode* temp=head;
        bool ans=true;
        while(temp!=NULL){
            array.push_back(temp->val);
            temp=temp->next;
        }
        reverse(array.begin(),array.end());
        temp=head;
        for(int i=0;i<array.size();i++){
            if(array[i]!=temp->val){
                ans=false;
            }
            temp=temp->next;
        }
        return ans;
    }
};