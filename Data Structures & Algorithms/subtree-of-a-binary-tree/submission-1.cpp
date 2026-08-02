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

    bool isSame(TreeNode* T, TreeNode* S){
        if(T == NULL && S == NULL) return true;
        if(T== NULL || S == NULL) return false;

        return (T->val == S->val && isSame(T->left, S->left) && isSame(T->right, S->right));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL) return true;
        if(root == NULL) return false;

        if(isSame(root, subRoot)) return true;

        return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
};
