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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return fun(root, 0, targetSum);
    }

private:
    bool fun(TreeNode* node, int sum, int target){
        if(node == NULL) return false;

        sum = sum + node -> val;

        if(node->left == NULL && node->right == NULL){
            if(sum == target) return true;
        }

        return fun(node->left, sum, target) ||
        fun(node->right, sum, target);
    }
};