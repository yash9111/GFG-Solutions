void DFS(vector<int> adj[], int i, vector<int>&vis,vector<int>&ans){
        vis[i] = 1;
        ans.push_back(i);
        for(auto it:adj[i]){
            if(vis[it] == 0){
                DFS(adj,it,vis,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        vector<int>ans;
        for(int i = 0;i<V;i++){
            if(vis[i] == 0){
                DFS(adj,i,vis,ans);
            }
        }
        return ans;
    }