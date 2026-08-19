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
        // If either list is empty, there can't be an intersection
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        
        // Loop until both pointers meet (either at the intersection node or at NULL)
        while (ptrA != ptrB) {
            // If ptrA reaches the end, switch to headB. Otherwise, move forward.
            if (ptrA == NULL) {
                ptrA = headB;
            } else {
                ptrA = ptrA->next;
            }
            
            // If ptrB reaches the end, switch to headA. Otherwise, move forward.
            if (ptrB == NULL) {
                ptrB = headA;
            } else {
                ptrB = ptrB->next;
            }
        }
        
        // Return the meeting point (will be the node, or NULL if no intersection)
        return ptrA;
    }
};