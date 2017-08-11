/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* root) {
   
   stack<TreeNode*> nodeStack;
TreeNode* lastNodeVisited;
vector<int> nodeValues;
if(!root) return nodeValues;
while(! nodeStack.empty() || root != NULL)
{
if(root != NULL)
{
nodeStack.push(root);
root = root->left;
}
else
{
TreeNode* peakNode = nodeStack.top();
if(peakNode->right != NULL && lastNodeVisited != peakNode->right)
{
root = peakNode->right;
}
else
{
nodeValues.push_back(peakNode->val);
lastNodeVisited = peakNode;
nodeStack.pop();
}
}
}
return nodeValues;
   
}
