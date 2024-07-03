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
    void solve(TreeNode* root, int targetsum, int &sum, vector<int> &path, vector<vector<int>> &ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            path.push_back(root->val);
            sum += root->val;
            if(sum == targetsum){
                ans.push_back(path);
            }
            path.pop_back();
            sum  -= root->val;
            return;
        }

        path.push_back(root->val);
        sum += root->val;

        solve(root-> left,  targetsum, sum, path, ans);
        solve(root -> right, targetsum, sum, path, ans);

        path.pop_back();
        sum -= root->val;
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        int sum = 0;
        vector<int> temp;
        solve(root, targetSum, sum, temp, ans);
        return ans;
    }
};