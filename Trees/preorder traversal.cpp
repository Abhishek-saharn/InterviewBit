/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
        
        
         stack<TreeNode* > st;
        vector<int > res;
        TreeNode* curr=root;
        while(1){
            if(curr){
                //cout<<curr->val;
                res.push_back(curr->val);
                st.push(curr);
                curr=curr->left;
            }else{
                if(st.empty()){
                    break;
                }
                else if(st.top()->right){
                    curr=st.top()->right;
                }
                st.pop();
            }
        }
        return res;

    
}
