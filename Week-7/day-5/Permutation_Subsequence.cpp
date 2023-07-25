#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const long long mod = 1e9+7;
void solve(){
    ll n;    cin>>n;
    ll a[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    ll tmp = 1;
    for(int i=1;i<=n;i++){
        tmp = tmp*mp[i];
        tmp = tmp%mod;
        ans = ans+tmp;
        ans = ans%mod;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}