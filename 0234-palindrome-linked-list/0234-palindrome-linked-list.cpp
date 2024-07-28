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
    bool isPalindrome(ListNode* head) {
        ListNode * temp=head;
        vector<int>arr;
        int i=1;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            if(arr[start]==arr[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};