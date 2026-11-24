class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>parent;
    void Inorder(TreeNode* root){
        if(root==NULL) return;
        if(root->left!=NULL) {
            parent[root->left]=root;
            Inorder(root->left);
        }
        if(root->right!=NULL){
            parent[root->right]=root;
            Inorder(root->right);
        }}
    
    int BOOM(TreeNode* target) {
        queue<TreeNode*> que;
        que.push(target);

        unordered_set<TreeNode*> visited;
        visited.insert(target);

        int result = 0;

        while (!que.empty()) {
            int n = que.size();
            bool spread = false;

            while (n--) {
                TreeNode* curr = que.front();
                que.pop();

                if (curr->left != NULL && !visited.count(curr->left)) {
                    que.push(curr->left);
                    visited.insert(curr->left);
                    spread = true;
                }

                if (curr->right != NULL && !visited.count(curr->right)) {
                    que.push(curr->right);
                    visited.insert(curr->right);
                    spread = true;
                }

                if (parent.count(curr) && !visited.count(parent[curr])) {
                    que.push(parent[curr]);
                    visited.insert(parent[curr]);
                    spread = true;
                }
            }

            if (spread) result++;
        }

        return result;
    }
    TreeNode* findStart(TreeNode* root, int start){
       if (root == NULL) return nullptr;
    if (root->val == start) return root;
        TreeNode* left = findStart(root->left, start);
    if (left!=nullptr) return left;

    TreeNode* right = findStart(root->right, start);

    return right;
    }
    int amountOfTime(TreeNode* root, int start) {
        Inorder(root);
        TreeNode* target=findStart(root, start); //you cannot return a function so make a node and then put it 
        return BOOM(target);
    }
};