/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int cnt=0;
void rec(TreeNode* root,int mxn){
    if(!root) return ;
    int v=root->val;
    if(v>=mxn){
        cnt++;
    }
    v=max(v,mxn);
    rec(root->left,v);
    rec(root->right,v);
}
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        rec(root,INT_MIN);
        return cnt;
    }
};