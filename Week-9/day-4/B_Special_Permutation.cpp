#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> res;
    for(int i = b+1; i <= n; i++) {
        res.push_back(i);
    }
    for(int i = a; i <= b; i++) {
        res.push_back(i);
    }
    for(int i = 1; i < a; i++) {
        res.push_back(i);
    }
    ll mi = INT_MAX, mx = 0;
    for(int i = 0; i < n/2; i++) {
        mi = min(mi, res[i]);
        mx = max(mx, res[i+n/2]);
    }
    if(mi == a and mx == b) {
        for(auto u : res) {
            cout << u << ' '; 
        }
        cout << '\n';
    } else {
        cout << -1 << '\n';
    }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}