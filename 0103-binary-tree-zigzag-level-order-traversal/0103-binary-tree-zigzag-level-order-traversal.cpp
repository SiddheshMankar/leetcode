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
int count=0;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>row(size);
            for(int i=0;i<size;i++){
                TreeNode* frontNode=q.front();
                q.pop();
                int index=flag ? i:size-i-1;
                row[index]=frontNode->val;
                if(frontNode->left){
                    q.push(frontNode->left);
                }
                if(frontNode->right){
                    q.push(frontNode->right);

                }   
            }
              ans.push_back(row);
                flag=!flag;

        }
        return ans;

    }
};