class Solution {
public:
     bool checker(TreeNode* root,int  sum,int targetSum){
        if(root==nullptr)return false;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
                    if(sum==targetSum){
                        return true;
                    }
                    return false;
        }
        return checker(root->left,sum,targetSum)||
        checker(root->right,sum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
         return  checker(root,sum,targetSum);
    }
};