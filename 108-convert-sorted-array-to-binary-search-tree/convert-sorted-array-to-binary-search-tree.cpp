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
    TreeNode* solve(TreeNode* root, vector<int> &nums, int s, int e){
        if(s>e){
            return NULL;
        }
        int mid = s+(e-s)/2;
        TreeNode* root1 = new TreeNode(nums[mid]);
        root1->left = solve(root1->left, nums, s, mid-1);
        root1->right = solve(root1->right, nums, mid+1, e);
        return root1;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        int s = 0;
        int e = nums.size()-1;
        if(nums.empty()){
            return NULL;
        }
        root = solve(root, nums, s, e);
        return root;
    }
};