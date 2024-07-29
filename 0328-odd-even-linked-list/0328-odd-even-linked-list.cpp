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
    ListNode* oddEvenList(ListNode* head) {
        ListNode * temp=head;
        vector<int> arr;
        if (!head || !head->next) return head;
      while (temp) {
        arr.push_back(temp->val);
         if (temp->next && temp->next->next) {
            temp = temp->next->next;
        } else {
            break;
        }
    }
        temp=head->next;
        while (temp && temp->next) {
        arr.push_back(temp->val);
        temp = temp->next->next;
    }

    // Reassign the values in the original order
    temp = head;
    for (int i = 0; i < arr.size(); i++) {
        temp->val = arr[i];
        temp = temp->next;
    }
       return head;
    }
};