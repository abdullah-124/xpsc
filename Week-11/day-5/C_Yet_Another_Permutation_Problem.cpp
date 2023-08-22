#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    bool vis[n+1] = {0};
    vector<int>v;
    for(int i=1;i<=n;i++){
        int x = i;
        while(x <= n){
            if(vis[x])break;
            cout<<x<<" ";
            vis[x] = true;
            x *= 2;
        }
        
    }
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}