#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int q;  cin>>q;
    vector<ll>a(n+1);
    ll sum = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i] += a[i-1];
    }
    for(int i=0;i<q;i++){
        ll x = a[n];
        int l,r,k;  cin>>l>>r>>k;
        ll b = a[r] - a[l-1];
        x -= b;
        ll ad = k*(r-l+1);
        x += ad;
        if(x%2)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}