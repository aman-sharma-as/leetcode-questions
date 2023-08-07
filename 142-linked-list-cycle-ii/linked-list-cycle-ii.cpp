/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return NULL;
        }

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(fast == slow){
                // Reseting the slow back to head
                slow = head;
                while(fast != slow){
                    /* To get the index where the 
                    cycle begin, we'll move slow and fast
                    on-by-one step ahead
                    */
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow;
            }
        }
        return NULL;
    }
};