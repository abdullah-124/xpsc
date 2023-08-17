#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll k;  cin>>k;
    if(n&1 and !(k&1))cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}