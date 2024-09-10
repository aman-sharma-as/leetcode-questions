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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *m = headA;
        ListNode *n = headB;
        int l1 = 0, l2 = 0, diff = 0;

        while(m != NULL){
            l1++;
            m = m -> next;
        }
        while(n != NULL){
            l2++;
            n = n -> next;
        }

        m = headA;
        n = headB;

        diff = abs(l1-l2);

        if(l1 > l2){
            for(int i = 0; i < diff; i++){
                m = m -> next;
            }
        }
        else{
            for(int i = 0; i < diff; i++){
                n = n -> next;
            }
        }

        while(m != n){
            m = m -> next;
            n = n-> next;

            if(m == NULL || n == NULL){
                return NULL;
            }
        }
        return m;

    }
};