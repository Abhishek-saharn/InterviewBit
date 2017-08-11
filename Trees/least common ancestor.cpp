/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* lcan(TreeNode* A, int val1, int val2){
     
    if(A==NULL||A->val==val1||A->val==val2) return A;
    
    TreeNode *lcal=lcan(A->left,val1,val2);
    TreeNode *lcar = lcan(A->right,val1,val2);
    
    if(lcal&&lcar){
        return A;
    }
    
    return (lcal!=NULL)?lcal:lcar;
 }
 bool isPresent(TreeNode* root,int val){
     
     queue<TreeNode * > q;
     q.push(root);
     while(!q.empty()){
         TreeNode* temp = q.front();
         q.pop();
         if(temp->val==val)return true;
         if(temp->left)q.push(temp->left);
         if(temp->right)q.push(temp->right);
     }
     
     return false;
 }
int Solution::lca(TreeNode* A, int val1, int val2) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(!isPresent(A,val1)||!isPresent(A,val2))return -1;
    TreeNode* res = lcan(A,val1,val2);
    return res->val;
    
}
