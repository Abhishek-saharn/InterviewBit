/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root) {
 
     stack<TreeNode*> st;
        
        vector<int > res;
       // if(!root)return res;
        TreeNode *curr=root;
        while(1){
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }else if(!st.empty()){
                curr=st.top();
                res.push_back(curr->val);
                st.pop();
                curr=curr->right;
            }else{
                break;
            }
        }
        return res;
}
