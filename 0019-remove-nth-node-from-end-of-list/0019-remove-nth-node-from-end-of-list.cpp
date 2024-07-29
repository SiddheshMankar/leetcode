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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (!head) return nullptr;

    ListNode* temp = head;
    int count = 0;

    // Count the number of nodes in the list
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Handle edge case where we need to remove the first node
    if (n == count) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    temp = head;
    int req = count - n;
    count = 1;

    // Traverse to the node just before the one we need to remove
    while (temp != NULL) {
        if (req == count) {
            ListNode* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
            break;
        } else {
            count++;
            temp = temp->next;
        }
    }

    return head;
}

};