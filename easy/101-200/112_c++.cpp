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
        if (root == nullptr)
            return false;
        if (root->right == nullptr && root->left == nullptr) {
            if (targetSum - root->val == 0)
                return true;
            else
                return false;
        }
        if (root->left != nullptr) {
            bool check = hasPathSum(root->left, targetSum - root->val);
            if (check == true)
                return true;
        }
        if (root->right != nullptr) {
            bool check = hasPathSum(root->right, targetSum - root->val);
            if (check == true)
                return true;
        }

        return false;
    }
};