#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,m,h;  cin>>n>>m>>h;
    vector<vector<int>>a(n+1,vector<int>(m+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<pair<int,int>>part(n);
    for(int i=0;i<n;i++){
        part[i].first= 0;
        part[i].second = i;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            part[i].first += (a[i][j]);
        }
    }
    //======
    sort(part.begin(),part.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        if(part[i].second == 0){
            ans = i;
            break;
        }
    }
    // for(auto it : part){
    //     cout<<it.first<<" "<< it.second<<endl;
    // }
    cout<<ans+1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}