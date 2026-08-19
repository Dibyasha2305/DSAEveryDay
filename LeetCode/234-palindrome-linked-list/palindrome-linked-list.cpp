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
    // Helper function to reverse a linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        
        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        // Base case: empty list or single node is a palindrome
        if (head == NULL || head->next == NULL) {
            return true;
        }

        // Step 1: Find the middle using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        
        // This ensures slow lands on the first middle node for even-length lists
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        // slow->next is the start of the second half
        ListNode* secondHalf = reverseList(slow->next);
        
        // Step 3: Compare the first half and the reversed second half
        ListNode* firstHalf = head;
        ListNode* temp2 = secondHalf; 
        
        while (temp2 != NULL) {
            if (firstHalf->val != temp2->val) {
                return false; // Mismatch found
            }
            firstHalf = firstHalf->next;
            temp2 = temp2->next;
        }

        // Step 4 (Optional but good practice): Restore the list to its original state
        // slow->next = reverseList(secondHalf);

        return true; // All nodes matched
    }
};