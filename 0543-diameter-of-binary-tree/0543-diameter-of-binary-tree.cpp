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
    if (root == NULL) return 0;
    int Left = maxDepth(root->left);
    int Right = maxDepth(root->right);
    return 1 + max(Left, Right);
}

int diameterUtil(TreeNode* root, int &maxi) {
    if(root==NULL)return 0;
    int lh=diameterUtil(root->left,maxi);
    int rh=diameterUtil(root->right,maxi);
    maxi=max(maxi,lh+rh);
    return max(lh,rh)+1;
}

int diameterOfBinaryTree(TreeNode* root) {
    int maxi = 0;
    diameterUtil(root, maxi);
    return maxi;
}

};