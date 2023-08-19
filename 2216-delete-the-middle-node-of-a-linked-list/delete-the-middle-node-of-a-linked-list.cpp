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
private:
ListNode* getMiddleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow){
            return slow;
        }
    }
    return slow;
}
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL){
            head = NULL;
            return head;
        }
        ListNode* mid = getMiddleNode(head);
        ListNode* prev = head;
        while(prev -> next != mid){
            prev = prev -> next;
        }
        prev -> next = mid -> next;
        return head;
    }
};