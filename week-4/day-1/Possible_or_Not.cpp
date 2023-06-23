#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    ll n,k; cin>>n>>k;
    ll arr[n];
    ll flg = (1<<30)-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ll s = arr[i] & k;
        //cout<<s<<" ";
        if(s==k)flg &= arr[i];
    }
    if(flg == k)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}