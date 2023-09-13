#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll k;  cin>>k;
    vector<ll>a(n);
    ll sum = 0;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
    auto check = [&](int x){
        ll cur = 0;
        ll cnt = 0;
        for(auto it : a){
            if(it >x)return false;
            if(cur + it >x)cnt++,cur = it;
            else cur += it;
        }
        if(cur)cnt++;
        return cnt<=k;
    };
    ll l = 0, r= sum;
    while(l+1<r){
        ll m = l + (r-l)/2;
        if(check(m))r = m;
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