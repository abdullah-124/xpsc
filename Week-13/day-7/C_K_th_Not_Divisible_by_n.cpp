#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll k;  cin>>k;
    k += (k-1)/(n-1);
    cout<<k<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}