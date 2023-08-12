/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    void insertAtTail(Node* &head, Node* &tail, int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        // Step 1 - Creating clone node with next ptrs
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp -> val);
            temp = temp -> next;
        }
        // Step 2 - Creating mapping
        unordered_map<Node*, Node*> oldToNew;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL){
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        // Step 3 - Creating random ptrs in clone list
        originalNode = head;
        cloneNode = cloneHead;
        while(cloneNode != NULL){
            cloneNode -> random = oldToNew[originalNode -> random];
            cloneNode = cloneNode -> next;
            originalNode = originalNode -> next;
        }
        return cloneHead;
    }
};