#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll a[n];
    ll mx = 0;
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum+a[i];
        mx = max(mx,a[i]);
    }
    ll g = mx - a[0];
    for(int i=1;i<n;i++){
        g = __gcd(g,mx-a[i]);
    }
    ll ans = ((mx * n)-sum)/g;
    cout<<ans<<" "<<g<<endl;
}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}