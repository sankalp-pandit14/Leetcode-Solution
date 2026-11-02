class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // if(root==nullptr)return ans;
        // queue<TreeNode*>q;
        // q.push(root);
        // while(!q.empty()){
        //     int size= q.size();
        //     for(int i=0;i<size;i++){
        //     TreeNode* node= q.front();
        //      q.pop();
        //     if(node->left!=NULL)q.push(node->left);
        //     if(node->right!=NULL)q.push(node->right);
        //    ans.push_back(node->val);
        //     }
        // }
      if(root==nullptr) return nullptr;
      TreeNode* node= root->left;
      root->left= root->right;
      root->right=node;
      invertTree(root->left);
      invertTree(root->right);
      return root;

    }
};