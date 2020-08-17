/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define PII pair<int,int>
class Solution {
public:
    TreeNode * ans;
    int dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return 0;
        int left = dfs(root->left, p, q);
        int right = dfs(root->right, p, q);
        if(root->val == p->val || root->val == q->val){
            ans = root;
            return 1 + left + right;
        }else if(left == 1 && right == 1){
            ans = root;
        }
        return left + right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        dfs(root, p, q);
        return ans;
    }
};