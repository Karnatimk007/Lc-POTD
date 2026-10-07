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
int mx=INT_MIN;
int maxsum(TreeNode* root)
{
    if(!root->left&&!root->right) 
    {
        mx=max(mx,root->val);
        return root->val;
    }
    int l=0;
    if(root->left)l=max(l,maxsum(root->left));
    int r=0;
    if(root->right)r=max(r,maxsum(root->right));
    mx=max(mx,l+r+root->val);
    return max(l,r)+root->val;

}
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
         maxsum(root);
         mx=max(mx,root->val);
         return mx;
    }
};