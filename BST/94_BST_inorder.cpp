//94.cpp

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

/* Recursive Solution:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        inorderTraversalUtil(root, res);
        return res;
    }
    void inorderTraversalUtil(TreeNode* curr, vector<int>& res){
        if (!curr) return;
        inorderTraversalUtil(curr->left, res);
        res.push_back(curr->val);
        inorderTraversalUtil(curr->right, res);
    }
*/
    vector<int> inorderTraversal(TreeNode* root){
        stack<TreeNode*> stk;
        vector<int> res;
        TreeNode* curr = root;
        while (curr != NULL || !stk.empty()){
            if(curr){
                stk.push(curr);
                curr = curr->left;
            }else{
                curr = stk.top();
                stk.pop();
                res.push_back(curr->val);
                curr = curr->right;
            }
        }
        return res;
    }

};
