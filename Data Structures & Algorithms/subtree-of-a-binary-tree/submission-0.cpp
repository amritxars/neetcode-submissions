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
    bool areidentical(TreeNode* root1, TreeNode* root2){
        if (root1==NULL && root2==NULL) return true;

        if (root1==NULL || root2 == NULL) return false;

        return (root1->val == root2->val && areidentical(root1->left,root2->left) &&        areidentical(root1->right,root2->right));

    }

    bool isSubtree(TreeNode* S, TreeNode* T) {
        if (T == NULL) return true;

        if (S==NULL) return false;

        if(areidentical(S,T)) return true;

        return (isSubtree(S->left,T) || isSubtree(S->right,T));
        
    }
};