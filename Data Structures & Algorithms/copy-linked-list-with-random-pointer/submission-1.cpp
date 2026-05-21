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
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL){
            return NULL;
        }

        unordered_map<Node*, Node*> m;
        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;

        m[head] = newHead;
// copying
        while(oldTemp != NULL){

            Node* copyNode = new Node(oldTemp->val);

            m[oldTemp] = copyNode; //map new to old

            newTemp->next = copyNode;
            oldTemp = oldTemp ->next;
            newTemp = newTemp->next;


        }
        // random ptr linking
        oldTemp = head; newTemp = newHead;
        while(oldTemp != NULL){
            newTemp->random = m[oldTemp->random]; //star step
            oldTemp = oldTemp ->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};
