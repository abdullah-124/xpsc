#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll dp[N];
void solve(){
    int n;    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        if(dp[i-1]<a[i]){
            cout<<dp[i-1]<<endl;
            return;
        }
        dp[i] = dp[i-1]+a[i];
    }
    cout<<dp[n];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}