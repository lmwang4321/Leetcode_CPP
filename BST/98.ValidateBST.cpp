//98.cpp
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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> stk;
        long long inorder = (long long)INT_MIN-1;
        while(root!=NULL||!stk.empty()){
            while (root!=NULL){
                stk.push(root);
                root=root->left;
            }
            root = stk.top();
            stk.pop();
            if(inorder >= root->val) return false;
            inorder = root->val;
            root = root->right;
            
        }
        return true;
    }
};
