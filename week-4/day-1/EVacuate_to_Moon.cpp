#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
   int n,m,h;  cin>>n>>m>>h;
    vector<ll> a(n), b(m);
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<m;i++)cin >> b[i]; 
    sort(a.rbegin(),a.rend());   
    sort(b.rbegin(),b.rend()); 
    int x = min(n, m);
    ll ans=0;
    for(int i=0;i<x;i++){
        ans += min(b[i]*h, a[i]);
    } 
    cout << ans << endl; 
}

int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}