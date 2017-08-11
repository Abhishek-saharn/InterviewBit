/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int sum) {
   
   if(root==NULL)return false;
   else if(root->right==NULL&&root->left==NULL&&root->val==sum)return true;
   return (hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val));
   
}
