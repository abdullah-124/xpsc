#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int fst = INT_MAX,sec = INT_MAX;
    ll ans = 0;
    for(int c=0;c<n;c++){
        int m;  cin>>m;
        int a[m];
        for(int i=0;i<m;i++)cin>>a[i];
        sort(a,a+m);
        fst = min(fst,a[0]);
        sec = min(sec,a[1]);
        ans += a[1];
    }
    ans -= sec;
    ans += fst;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}