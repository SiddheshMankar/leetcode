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
        ListNode *temp1=headA;
        ListNode* temp2=headB;
        int n1=0;
        int n2=0;
        while(temp1!=NULL){
            n1++;
            temp1=temp1->next;
        }
          while(temp2!=NULL){
            n2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
    if (n1 > n2) {
        int diff = n1 - n2;
        while (diff--) {
            temp1 = temp1->next;
        }
    } else {
        int diff = n2 - n1;
        while (diff--) {
            temp2 = temp2->next;
        }
    }

    // Traverse both lists together to find the intersection point
    while (temp1 != nullptr && temp2 != nullptr) {
        if (temp1 == temp2) {
            return temp1; // Intersection point found
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

       return NULL;

    }
};