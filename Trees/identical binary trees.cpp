/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* p, TreeNode* q) {
  if(p==NULL&&q==NULL)return true;
        if(p==NULL&&q!=NULL)return false;
        if(p!=NULL&&q==NULL)return false;
                
        //else if(p->data==p->data)return ture;
        return (p->val==q->val&&isSameTree(p->right,q->right)&&isSameTree(p->left,q->left));
}
