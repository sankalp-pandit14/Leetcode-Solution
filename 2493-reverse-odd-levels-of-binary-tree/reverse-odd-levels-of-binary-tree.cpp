class Solution {
public:
    void solve(TreeNode*prag,TreeNode*wif,int level){
        if(prag==NULL) {return;}
        if(wif==NULL) {return;}
        if(level%2!=0){
            int temp= prag->val;
            prag->val=wif->val;
            wif->val=temp;
        }
        solve(prag->left,wif->right,level+1);
        solve(prag->right,wif->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        // queue<TreeNode*>q;
        // q.push(root);int level=0;
        // while(!q.empty()){
        //     int size= q.size();
        //     vector<TreeNode*>pragati;
        //     while(size--){
        //     TreeNode* node= q.front();
        //      q.pop();
        //     if(node->left!=NULL)q.push(node->left);
        //     if(node->right!=NULL)q.push(node->right);
        //     pragati.push_back(node);
        //     }
        //     if(level%2!=0){
        //         int i=0;
        //         int j=pragati.size()-1;
        //         while(i<j){
        //             int temp=pragati[i]->val;
        //             pragati[i]->val=pragati[j]->val;
        //             pragati[j]->val=temp;
        //             i++;j--;
        //         }
        //     }
        //     level++;
        // }
        // return root;
        solve(root->left,root->right,1);
        return root;
    }
};