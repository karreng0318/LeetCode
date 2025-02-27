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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp1;
        ListNode* temp2;
        if(!head)
        {
            return head;
        }
        temp1 = head;
        temp2 = head;
        temp2 = temp2->next;
        while(temp2)
        {
            if((temp1->val) != (temp2->val))
            {
                
                temp1->next = temp2;
                temp1 = temp1->next;   
                
            }        
                
                temp2 = temp2->next; 
       }
       temp1->next = NULL;
        temp1 = head;
        return temp1;
        
    }
};