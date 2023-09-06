#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
class Solution{
    public: 
    //BFS
    bool bfs(int src, int vis[],vector<int>adj[]){
      queue<pair<int,int>>q;
      q.push({src,-1});
      vis[src] = 1;
      while(!q.empty()){
          int node = q.front().first;
          int parent = q.front().second;
          q.pop();
          for(auto adj_node : adj[node]){
              if(!vis[adj_node]){
                  q.push({adj_node,node});
                  vis[adj_node] = 1;
              }
              else if(adj_node != parent)return true;
          }
      }
      return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                bool detect_cycle = bfs(i,vis,adj);
                if(detect_cycle)return true;
            }
        }
        return false;
    }
};
void solve(){
    int v,e;    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0;i<e;i++){
        int a,b;    cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    Solution check;
    bool ans = check.isCycle(v,adj);
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--){
        solve();
        /* 
            INPUT: 
            1
            5 5
            0 1
            1 2
            1 4
            2 3
            3 4
         */
    }
    return 0;
}