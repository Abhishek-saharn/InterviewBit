/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* root) {
    TreeNode * p = root;
    if(root==NULL)return NULL;
    queue<TreeNode * > q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode * x = temp->right;
        temp->right= temp->left;
        temp->left=x;
        if(temp->right)q.push(temp->right);
        if(temp->left)q.push(temp->left);
    }
    return p;
}
