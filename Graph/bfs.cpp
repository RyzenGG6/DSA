    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        queue<int>q;
        int vis[V]={0};
        vis[0]=1;
        q.push(0);
        while(!q.empty()){
            int a=q.front();
            q.pop();
            bfs.push_back(a);
            for(auto it:adj[a]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }