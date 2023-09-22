#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll k;  cin>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll l=0, r = 2e9;
    while(l<r){
        ll m = l+(r-l+1)/2;
        ll cnt = 0;
        for(int i=0;i<n;i++){
            cnt += max(m-a[i],0ll);
        }
        if(cnt <= k)l = m;
        else r = m-1;
    }
    cout<<l<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}