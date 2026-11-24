class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        long long ans=0;
        queue<pair<TreeNode*,long long >>q;
        q.push({root,0});
        while(!q.empty()){
            long long n=  q.size();
            long long mini=q.front().second;
            long long first,last;
            for(int i=0;i<n;i++){
            long long less= q.front().second-mini;
            TreeNode* curr= q.front().first;
            q.pop();
            if(i==0)first=less;
            if(i==n-1)last=less;
            if(curr->left!=NULL){
              q.push({curr->left,less*2+1});
            }
            if(curr->right!=NULL){
             q.push({curr->right,less*2+2});
            }
            }
            ans= max(ans,last-first+1);
        }
        return ans;
    }
};