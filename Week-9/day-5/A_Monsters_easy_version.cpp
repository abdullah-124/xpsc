#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans = 0;
    sort(a,a+n);
    b[0] = 1;
    for(int i=1;i<n;i++){
        b[i] = min(b[i-1]+1,a[i]);
    }
    for(int i=0;i<n;i++)ans += a[i]-b[i];
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}