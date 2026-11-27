class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int,int>child_to_parent;
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<n;i++){
            int node=i;
            int leftc= leftChild[i];
            int rightc=rightChild[i];
            if(leftc!=-1){
                adj[node].push_back(leftc);
                child_to_parent[leftc]=node;
            }
            if(rightc!=-1){
                adj[node].push_back(rightc);
                child_to_parent[rightc]=node;
            }
        }
        int root=-1;
        for(int i=0;i<n;i++){
            if(child_to_parent.find(i)==child_to_parent.end()){
                if(root!=-1) return false;
                root=i;
            }
            
        }
        if(root==-1) return false;
        queue<int>q;
        int count=1;
        q.push(root);
        vector<bool>visited(n,false);
        visited[root]=true;
        while(!q.empty()){
        int node= q.front();q.pop();
        for(int i=0;i<adj[node].size();i++){
            int v= adj[node][i];
            if(visited[v]==true)return  false;
            count++;
            q.push(v);
            visited[v]=true;
        }
        }
        return count==n;
    }
};