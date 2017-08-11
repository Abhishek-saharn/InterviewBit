/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* root) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode* A=root;
    if (root==NULL) return root;
    stack<TreeNode * > s;
    while(1){
        while(root){
            if(root->right){
                s.push(root->right);
            }
            if(root->left){
                root->right=root->left;
                TreeNode *t=root->left;
                root->left=NULL;
                root=t;
                
            }else{
                if(!s.empty())
                root->right = s.top();
                else root->right = NULL;
                
                root= root->left;
            }
        }
        if(s.empty())break;
        root=s.top();
        s.pop();
    }
    
    return A;
}
