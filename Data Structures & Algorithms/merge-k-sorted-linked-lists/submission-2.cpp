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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(ListNode* list : lists){
            while(list != NULL){
                minHeap.push(list->val);
                list = list->next;
            }
        }

        ListNode dummy(-1);
        ListNode* merge = &dummy;

        while(!minHeap.empty()){
            merge -> next = new ListNode(minHeap.top());
            minHeap.pop();
            merge = merge -> next;
        }

        return dummy.next;
    }
};
