#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,h; cin>>n>>h;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll l = 0,r=1e18;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll sum = mid;
        for(int i=0;i<n-1;i++){
            sum += min(mid,(a[i+1]-a[i]));
        }
        if(sum <h)l=mid+1;
        else r = mid-1;
    }
    cout<<r+1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}