vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>Vis(V,0);
        vector<int>bfs;
        queue<int>q;
        Vis[0]=1;
        q.push(0);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node])
            {
                if(!Vis[it])
                {
                    Vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
