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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorderList;
        doPreorderTraversal(root, preorderList);
        return preorderList;
    }

    void doPreorderTraversal(TreeNode *root, vector<int> &preorderList) {
        if (root == nullptr)
            return;
        preorderList.push_back(root->val);
        doPreorderTraversal(root->left, preorderList);
        doPreorderTraversal(root->right, preorderList);
    }

};