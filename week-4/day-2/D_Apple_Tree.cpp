#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const int N = 2 * 1e5 + 5;
vector<int>adj_list[N];
int cnt[N];
void dfs(int src, int par){
    cout<<src<<" ";
    if(adj_list[src].size()==1 && src != 1){
        cnt[src] = 1;
        //return;
    }
    for(auto adjNode : adj_list[src]){
        if(src != par){
            dfs(adjNode,src);
            cnt[src] += cnt[adjNode];
        }
    }
    //cout<<src<<" ->"<<cnt[src]<<", ";
}
void solve(){
    int n;    cin>>n;
    for(int i=0;i<=n;i++)adj_list[i].clear();
    for(int i=1;i<n;i++){
        int u,v;    cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(1,-1);
    int q;  cin>>q;
    while(q--){
        int a,b;    cin>>a>>b;
        ll res = cnt[a] * cnt[b];
        cout<<res<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        solve();
        memset(cnt,0,N);
    }
    return 0;
}