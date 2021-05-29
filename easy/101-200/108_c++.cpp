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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return doTraversal(nums, 0, nums.size() - 1);
    }

    TreeNode* doTraversal(vector<int>& nums, int left, int right) {
        if (right < left)
            return nullptr;
        TreeNode * root = new TreeNode();
        if (right == left) {
            root->val = nums[right];
            return root;
        }
        root->val = nums[left + (right - left) / 2];
        root->right = doTraversal(nums, left + 1 + (right - left) / 2, right);
        root->left = doTraversal(nums, left, left - 1 + (right - left) / 2);

        return root;
    }
};