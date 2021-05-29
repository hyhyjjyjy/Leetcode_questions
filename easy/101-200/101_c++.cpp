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
    bool isSymmetric(TreeNode* root) {
        TreeNode *right = root->right;
        TreeNode *left = root->left;
        if (right == nullptr && left == nullptr)
            return true;
        else if (right == nullptr || left == nullptr)
            return false;
        queue <TreeNode *> right_elements({right}), left_elements({left});
        while (right_elements.size() != 0 && left_elements.size() != 0) {
            TreeNode * ptr_right = right_elements.front();
            TreeNode * ptr_left = left_elements.front();
            right_elements.pop();
            left_elements.pop();
            if (ptr_left->val != ptr_right->val)
                return false;
            if (ptr_left->left != nullptr) {
                if (ptr_right->right == nullptr)
                    return false;
                else {
                    left_elements.emplace(ptr_left->left);
                    right_elements.emplace(ptr_right->right);
                }
            }
            else if (ptr_right->right != nullptr)
                    return false;
            
            if (ptr_left->right != nullptr) {
                if (ptr_right->left == nullptr)
                    return false;
                else {
                    left_elements.emplace(ptr_left->right);
                    right_elements.emplace(ptr_right->left);
                }
            }
            else if (ptr_right->left != nullptr)
                    return false;
        }

        return true;
    }
};