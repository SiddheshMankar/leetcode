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
        ListNode *temp;
        temp=headA;
        unordered_map<ListNode*,bool>mp;

        while(temp!=NULL){
            mp[temp]=true;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;

    }
};