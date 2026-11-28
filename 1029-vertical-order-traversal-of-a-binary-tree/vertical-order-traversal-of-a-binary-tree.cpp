class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;//this map 1 st int is for vertical line,  2nd is for levels and the nodes nodes are given multiset cooz there can be multiple nodes of same number in a same level Suppose in the middle column (x = 0), you have: Top floor (y = 0): Node 10 Bottom floor (y = 4): Node 2 If level and node were NOT kept together (just dumping 10 and 2 into one bag for column 0), the bag would sort them by number and give the value which we dont want . Because level and node ARE paired together, the code puts 10 in the y = 0 folder and 2 in the y = 4 folder
        queue<pair<TreeNode*, pair<int,int>>>todo;
        todo.push({root,{0,0}}); //{x,y} x= vertical line y= level or floors
        while(!todo.empty()){
            auto p= todo.front(); //auto tells the compiler to find the dat type automatically not write long pair<TreeNode*, pair<int, int>> p = todo.front();
            todo.pop();
            TreeNode* node= p.first;
            int x= p.second.first; int y= p.second.second;
            nodes[x][y].insert(node->val); //this is the ost important part it stores the node values , stores it on the dedicated column and lvel eg: suppose we have 10 already saved in 0=x,2=y so it aadds 9 the new no. which also has same x and y so it beoomes finally {10,9}
            if(node->left!=NULL){
                todo.push({node->left,{x-1,y+1}});
            }
            if(node->right!=NULL){
                todo.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto p:nodes){
            vector<int>col;
            for(auto  q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
    return ans;
    }
};