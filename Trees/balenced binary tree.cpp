/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int h(TreeNode *root){
        if(root==NULL)return 0;
        return (1+max(h(root->left),h(root->right)));
    }
int Solution::isBalanced(TreeNode* root) {

     if(root==NULL)return true;
       int lh=h(root->left);
       int rh=h(root->right);
       if(abs(lh-rh)<2&&isBalanced(root->right)&&isBalanced(root->left))return true;
       else return false;
}
