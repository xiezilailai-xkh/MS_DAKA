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
    int ans;
    int dfs(TreeNode* root){
        if(!root)return 0;
        int tmp = 1;
        int left_one = 1;
        int right_one = 1;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if(root->left&&root->left->val == root->val) {
            tmp += left;
            left_one += left;
        }
        if(root->right&&root->right->val == root->val){
            right_one += right;
            tmp += right;
        } 
        int tmp_ans = max(max(left, right), tmp);
        
        ans = max(ans, tmp_ans);
        return max(left_one, right_one);
    }
    int longestUnivaluePath(TreeNode* root) {
        ans = 0;
        dfs(root);
        return max(0, ans-1);
    }
};