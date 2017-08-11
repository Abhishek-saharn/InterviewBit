/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<TreeNode*> s1,s2;
    vector<vector<int> > res;
    s1.push(A);
    while(!s1.empty()||!s2.empty()){
        vector<int > v1;
            
        while(!s1.empty()){
            TreeNode * temp= s1.top();
            s1.pop();
            v1.push_back(temp->val);
            if(temp->left)s2.push(temp->left);
            if(temp->right)s2.push(temp->right);
        }
    if(!v1.empty())
        res.push_back(v1);
        vector<int > v2;
        while(!s2.empty()){
            TreeNode * temp= s2.top();
            s2.pop();
            v2.push_back(temp->val);
            if(temp->right)s1.push(temp->right);
            if(temp->left)s1.push(temp->left);
            
        }
        if(!v2.empty())
        res.push_back(v2);
    }
    return res;
    
}
