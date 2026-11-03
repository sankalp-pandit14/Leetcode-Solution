class Solution {
public:
    int height(TreeNode* root) {
    if(root == nullptr) return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
    int diameter= height(root->left)+height(root->right);
    int ld= diameterOfBinaryTree(root->left);
    int rd= diameterOfBinaryTree(root->right);
     return max(diameter,max(ld,rd));
    }
};