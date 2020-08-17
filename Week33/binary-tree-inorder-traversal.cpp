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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>res;
        TreeNode* p = root;
        while(p){
            s.push(p);
            p = p->left;
        }
        while(s.size()){
            TreeNode* t = s.top();
            res.push_back(t->val);
            s.pop();
            if(t->right){
                p = t->right;
                while(p){
                    s.push(p);
                    p = p->left;
                }
            }
        }
        return res;
    }
};