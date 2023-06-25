#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const int N = 2e5 + 10;
vector<int>adjLst[N];
int cnt[N]; 
void dfs(int src,int par){
    if(adjLst[src].size() == 1 && adjLst[src][0] == par){
        cnt[src] = 1;
    }
    else{
        for(auto adjNode : adjLst[src]){
            if(adjNode != par){
                dfs(adjNode,src);
            }
        }
    }
}
void solve(){
    int n;    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;    cin>>u>>v;
        adjLst[u].push_back(v);
        adjLst[v].push_back(u);
    }
    dfs(1,-1);
    int k;  cin>>k;
    while(k--){
        int a,b;    cin>>a>>b;

    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}