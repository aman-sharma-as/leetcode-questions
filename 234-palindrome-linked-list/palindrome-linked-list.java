/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode middleNode = getMiddleNode(head);
        ListNode reverseHead = reverseList(middleNode);

        for(ListNode temp = head, temp2 = reverseHead; temp2 != null; ){
            if(temp == null || temp.val != temp2.val)
                return false;

            temp = temp.next;
            temp2 = temp2.next;
        }

        return true;
    }

    ListNode getMiddleNode(ListNode head){
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }

        return slow;
    }

    ListNode reverseList(ListNode middleNode){
        ListNode prevNode = null, currNode = middleNode, nextNode = null;

        while(currNode != null){
            nextNode = currNode.next;

            currNode.next = prevNode;

            prevNode = currNode;
            currNode = nextNode;
        }

        return prevNode;
    }
}