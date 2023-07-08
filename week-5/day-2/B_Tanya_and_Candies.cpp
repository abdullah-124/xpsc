#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll op = 0,ep = 0, os = 0, es = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i&1)es += a[i];
        else os += a[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(i&1)es -= a[i];
        else os -= a[i];
        if(os + ep == op + es)ans++;
        if(i&1)ep+= a[i];
        else op += a[i];
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
   solve();
    return 0;
}