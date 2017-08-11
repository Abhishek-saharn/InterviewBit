/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* root) {
    if(root==NULL)return;
    queue<TreeLinkNode *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeLinkNode *temp = q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            temp->next = q.front();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
}
