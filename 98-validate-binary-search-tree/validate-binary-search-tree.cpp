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
bool solve(TreeNode* root, long long int lower, long long int upper){
    //base case
    if(root == NULL){
        return true;
    }

    if(root->val > lower && root->val < upper){
        bool leftans = solve(root->left, lower, root->val);
        bool rightans = solve(root->right, root->val, upper);
        return leftans && rightans;
    }
    else{
        return false;
    }
    }
    bool isValidBST(TreeNode* root) {
        long long int  lower = -4294967296;
        long long int upper = 4294967296;
        bool ans = solve(root, lower, upper);
        return ans;
    }
};