#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 1e9;
    for(int i=0;i<n;i++){
        int x = 0;
        if(i+1<n) x = max(x,abs(a[i]-a[i+1]));
        if(i-1>=0) x = max(x,abs(a[i]-a[i-1]));
        ans = min(ans,x);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}