/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
     bool help(TreeNode* r1,TreeNode* r2){
        if(r1==NULL&&r2==NULL)return true;
        else if(r1!=NULL&&r2!=NULL){
            return(r1->val==r2->val&&help(r1->right,r2->left)&&help(r1->left,r2->right));
        }else return false;
    }
int Solution::isSymmetric(TreeNode* root) {
       if(!root)return true;
        return help(root->left,root->right);
}
