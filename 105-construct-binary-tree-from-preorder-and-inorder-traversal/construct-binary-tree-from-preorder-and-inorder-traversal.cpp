class Solution {
public:
    TreeNode* buildtree(vector<int> inorder, vector<int> preorder, int size, int &index, int inorderstart, int inorderend){

    // Base case
    if(index >= size || inorderstart > inorderend){
        return NULL;
    }

    int element = preorder[index++];
    TreeNode* root = new TreeNode(element);

    // finding the position
    int pos;
    for(pos = inorderstart; pos <= inorderend; pos++){
        if(inorder[pos] == element){
            break;
        }
    }
    // building left subtree and right subtree
    root->left = buildtree(inorder, preorder, size, index, inorderstart, pos-1);
    root->right = buildtree(inorder, preorder, size, index, pos+1, inorderend);

    return root;
}

    TreeNode* levelorder(TreeNode* root){
    if(root == NULL) {
        return NULL;
    }
    queue<TreeNode*> q;
    q.push(root);
    vector<int> values;
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp == NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            values.push_back(temp->val); // Store the values of the nodes
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int preindex = 0;
        int inStart = 0;
        int inEnd = inorder.size() - 1;
        TreeNode* root = buildtree(inorder, preorder, n, preindex, inStart, inEnd);
        TreeNode* ans = levelorder(root);
        return ans;
    }
};
