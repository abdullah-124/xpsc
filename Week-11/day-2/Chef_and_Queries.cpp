#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const ll M = (1ll<<32ll);
map<ll,bool>vis;
void solve(){
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a & 1)
        {
            if (vis[a / 2])
                continue;
            else
            {
                ans += (a / 2);
                vis[a / 2] = 1;
            }
        }
        else
        {
            if (vis[a / 2])
            {
                ans -= (a / 2);
                vis[a / 2] = 0;
            }
        }
        a = (a * b + c) % M;
    }
    cout << ans <<endl;
    
}
int main(){
    fastread()
    int t=1;  
    //cin>>t;
    while(t--)solve();
    return 0;
}