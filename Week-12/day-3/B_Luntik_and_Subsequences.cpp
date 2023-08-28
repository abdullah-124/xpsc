#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
 
void solve(){
    int n;    cin>>n;
    int c0=0,c1 = 0;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        if(t==0)c0++;
        if(t==1)c1++;
    }
    ll ans =(1ll<<c0) * c1;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}