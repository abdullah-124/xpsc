#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<pair<int,int>>v;
    int x= 0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            x = i;
            v.push_back({1,i+1});
        }   
    }
    if(!x){
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[0]){
            v.push_back({x+1,i+1});
        }
    }
    cout<<"YES\n";
    for(auto it:v)cout<<it.first<<' '<<it.second<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}