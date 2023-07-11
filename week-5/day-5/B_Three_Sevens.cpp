#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;  cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        int k;  cin>>k;
        for(int j=1;j<=k;j++){
            int x;  cin>>x;
            mp[x] = i;
        }
    }
    vector<int>ans(n+1,-1);
    for(auto it : mp){
        if(ans[it.second] == -1)
            ans[it.second] = it.first;
    }
    for(int i=1;i<=n;i++){
        if(ans[i] == -1){
            cout<<"-1\n";
            return;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}