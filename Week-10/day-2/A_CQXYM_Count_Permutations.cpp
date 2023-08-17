#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const ll mod = 1e9+7;
void solve(){
    ll n;    cin>>n;
    ll ans = 1;
    for(ll i=1;i<=(ll)2*n;i++){
        ans  = ((ans % mod) * (i%mod))%mod;
    }
    ans = (ans%mod) / 2;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}