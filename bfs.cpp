//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int n=adj.size();
        int visited[n]={0};//all are note visited
        queue<int>q;
        q.push(0);
        visited[0]=1;//mark as visited
        vector<int>bfs;
        while(!q.empty()){
            int node=q.front();
            q.pop();//pop from queue
            bfs.push_back(node);//add to the ans  list
            for(auto el:adj[node]){
                if(visited[el]==0){
                    q.push(el);
                    visited[el]=1;

                }
            }
        }
        return bfs;
        
    }
};
