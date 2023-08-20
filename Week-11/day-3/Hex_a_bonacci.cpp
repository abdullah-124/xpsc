#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll a,b,c,d,e,f,n,mod= 10000007;
    cin>>a>>b>>c>>d>>e>>f>>n;
    ll ar[n+1] = {0};
    ar[0] = a;
    ar[1] = b;
    ar[2] = c;
    ar[3] = d;
    ar[4] = e;
    ar[5] = f;
    for(int i=6;i<=n;i++){
        ll x = (ar[i-1]+ar[i-2]+ar[i-3]+ar[i-4]+ar[i-5]+ar[i-6])%mod;
        ar[i] = x;
    }
    cout<<(ar[n]%mod)<<endl;

    
}
int main(){
    fastread()
    int t=1;  cin>>t;
    int x =1;
    while(t--){
        cout<<"Case "<<x<<": ";
        solve();
        x++;
    }
    return 0;
}