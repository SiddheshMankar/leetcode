/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      int maxDepth(TreeNode* root) {
        if(root==NULL)return NULL;
        int Left=maxDepth(root->left);
           int Right=maxDepth(root->right);
        return 1+max(Left,Right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        bool status=abs(lh-rh)<=1;
        bool leftans=isBalanced(root->left);
        bool rightans=isBalanced(root->right);
        return status && leftans && rightans;
    }
};