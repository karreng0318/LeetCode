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
        ListNode *res = new ListNode(0);
        ListNode *temp;
        temp = res;
        int sum,rem;
        sum = 0;
        rem = 0;
        while (l1 !=NULL || l2 != NULL || sum>0)
        {
                        
            if (l1 !=NULL)
            {
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if (l2 !=NULL)
            {
                sum = sum + l2->val;
                l2 = l2->next;
            }
            rem = sum%10;
            sum = sum/10;
            
            std::cout<<"\n"<<rem<<" "<<sum;
            temp->val = rem;
            if(l1 !=NULL || l2 != NULL || sum > 0)
            {
                temp->next = new ListNode;
                temp = temp->next;
            }

        }
        return res;
    }
};