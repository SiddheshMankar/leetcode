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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp=head;
        int count=0;
        if(head->next==NULL){
            return NULL;
        }
        if(head==NULL){
            return NULL;

        }
        if(head->next==NULL){
            return head;
        }
        if(count==2){
            return head->next;
        }
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        int mid =(count/2);
         count=0;
     while (temp != NULL) {
        if (count == mid - 1) {
            temp->next = temp->next->next;
            break;
        }
        count++;
        temp = temp->next;
    }
    return head;

        
    }
};