#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k,x;   cin>>n>>k>>x;
    ll tt = n*(n+1)/2;
    if(tt<x){
        cout<<"NO\n";
        return;
    }
    ll m = k*(k+1)/2;
    if(m>x){
        cout<<"NO\n";
        return;
    }
    ll f = (n-k+1+n)*k/2;
    if(f<x)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}