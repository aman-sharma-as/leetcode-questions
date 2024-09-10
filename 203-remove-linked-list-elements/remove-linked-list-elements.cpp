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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }

        struct ListNode* prev = NULL;
        struct ListNode* curr = head;
        struct ListNode* Ptr = NULL;
        while(curr != NULL){
            if(curr -> val == val && prev == NULL){
                Ptr = curr -> next;
                head = Ptr;
                curr = Ptr;
            }
            else if(curr -> val == val){
                Ptr = curr -> next;
                prev -> next = Ptr;
                curr = Ptr;
            }
            else{
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};