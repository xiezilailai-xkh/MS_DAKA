/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root, int L, int R){
        if(!root)return 0;
        int tmp = 0;
        if(root->val >= L && root->val <= R){
            tmp += root->val;
            tmp += dfs(root->right, L, R);
            tmp += dfs(root->left, L, R);
        }else if(root->val < L){
            tmp += dfs(root->right, L, R);
        }else {
            tmp += dfs(root->left, L, R);
        }
        return tmp;
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        return dfs(root, L, R);
    }
};