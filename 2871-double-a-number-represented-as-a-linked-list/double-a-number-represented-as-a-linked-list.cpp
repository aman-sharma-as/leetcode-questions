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
        if(head -> next == NULL)
            return head;

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
    
    void createList(ListNode* &head, ListNode* &tail, int data){
        ListNode* temp = new ListNode(data);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp; 
        }
    }
public:
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        
        ListNode* temp = head;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        int num = 0;
        int digit = 0;
        int carry = 0;
        while(temp != NULL || carry != 0){
            if(temp != NULL){
                num = carry + (temp -> val) * 2;
                temp = temp -> next;
            }
            else{
                num = carry;
            }
            digit = num % 10;
            createList(ansHead, ansTail, digit);
            carry = num / 10;
        }
        ansHead = reverse(ansHead);
        return ansHead;
    }
};