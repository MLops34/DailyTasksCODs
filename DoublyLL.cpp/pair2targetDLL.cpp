
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int,int>>result;
       Node *i=head;
       while(i){
           Node *j=i->next;
           while(j){
               if(i->data+j->data==target){
                   result.push_back({i->data,j->data});
               }
               j=j->next;
           }
           i=i->next;
       }
       return result;
    }
};