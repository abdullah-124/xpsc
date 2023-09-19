#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N= 2e5+4;
int dp[N],a[N];
void solve(){
    int n;    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        int k = i-1;
        while(a[k] >= a[i]) k = dp[k];
        dp[i] = k;
        cout<<dp[i]<<' ';
    }
    cout<<endl;


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}