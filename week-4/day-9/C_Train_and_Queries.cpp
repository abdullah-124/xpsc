#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    map<int,pair<int,int>>mp;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        if(!mp.count(t)){
            mp[t] = {i,i};
        }
        else{
            mp[t].second = i;
        }
    }
    while(k--){
        int a,b;    cin>>a>>b;
        if(!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second)
        cout<<"NO\n";
        else cout<<"YES\n";
    }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}