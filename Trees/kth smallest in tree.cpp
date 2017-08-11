/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int countNode(TreeNode * root){
     if(root==NULL)return 0;
     return (1 + countNode(root->left)+countNode(root->right));
 }
int Solution::kthsmallest(TreeNode* root, int k) {
    int count = countNode(root->left);         //find out the total nodes on left.
    if(k<=count){                               // if number we want is smaller then node on left, then it will be in left subtree.
        return kthsmallest(root->left,k);       
    }else if(k>count+1){                        //else number we want is greater thn +1 of count, it will be on right subtree.
        return kthsmallest(root->right,k-1-count);
        
    }
    return root->val;                           // and if equall to the count+1 means current node is tha answer
    
}
