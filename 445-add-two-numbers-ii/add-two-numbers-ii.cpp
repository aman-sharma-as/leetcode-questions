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
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;

        while(curr != NULL){
            forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    void insertAtTail(ListNode* &head, ListNode* &tail, int data){
        if(head == NULL){
            ListNode* temp = new ListNode(data);
            head = temp;
            tail = temp;
        }
        else{
            ListNode* temp = new ListNode(data);
            tail -> next = temp;
            tail = temp;
        }
    }
    ListNode* getSum(ListNode* first, ListNode* second){
        int sum = 0;
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        while(first != NULL || second != NULL || carry != 0){
            int val1 = 0;
            if(first != NULL){
                val1 = first -> val;
                first = first -> next;
            }
            int val2 = 0;
            if(second != NULL){
                val2 = second -> val;
                second = second -> next;
            }

            sum = carry + val1 + val2;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
        }
        return ansHead;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* ans = getSum(l1, l2);

        ans = reverse(ans);

        return ans;
    }
};