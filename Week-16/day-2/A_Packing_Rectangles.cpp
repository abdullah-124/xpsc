#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cal(ll w,ll h,ll n,ll x){
    ll a = x/w;
    ll b = x/h;
    return (a*b >= n);
}
void solve(){
    ll w,h;    cin>>w>>h;
    ll n;    cin>>n;
    ll x = 1;
    while(!cal(w,h,n,x))x*=2;
    //cout<<x<<endl;
    ll l = 0,r = x;
    while(l+1<r){
        ll m = l+(r-l)/2;
        if(cal(w,h,n,m))r = m;
        else l = m;
    }
    cout<<r<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}