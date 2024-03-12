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
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head==nullptr)
            return 0;
        unordered_map<int,ListNode*>m;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        m[0]=dummy;
        int sum=0;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            sum+=curr->val;
            if(m.find(sum)!=m.end())
            {
                ListNode* start=m[sum];
                int addVal=sum;
                while(start!=nullptr && start!=curr)
                {
                    start=start->next;
                    addVal+=start->val;
                    if(start!=curr)
                    {
                        m.erase(addVal);
                    }
                }
                m[sum]->next=curr->next;
            }
            
            else{
                m[sum]=curr;
            }
            
            curr=curr->next;
        }
        return dummy->next;
    }
};