/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void getAllPaths(vector<int> &out,vector<vector<int>> &res,TreeNode* root, int sum, int sum1){
    
    if(root == NULL)
        return;
    
    else{
        
        sum1 += root->val;
        out.push_back(root->val);
        
        if(root->left)
            getAllPaths(out,res,root->left, sum, sum1);
        
        if(root->right)
            getAllPaths(out,res,root->right, sum, sum1);        
        
        if(sum == sum1 &&  root->left == NULL && root->right == NULL){
            
            if(sum == sum1)
                res.push_back(out);
        }
        
        out.pop_back();
        return; 
    }    
}
vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
  
    vector<vector<int>> res;
vector<int> out;
    getAllPaths(out,res,root, sum, 0);
    return res;
}
