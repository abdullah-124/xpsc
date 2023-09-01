#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll k;  cin>>k;
    ll n;    cin>>n;
    cout<<"YES\n";
    for(ll i=k;i<n;i+=2){
        cout<<i<<" "<<(i+1)<<endl;
    }
}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}