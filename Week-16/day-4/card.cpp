#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>v(n+1);
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>=0;i--){
        v[i] = v[i+1] + (a[i]<0 ? 0:a[i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int x = v[i+1] + (i&1 ?0:a[i]);
        ans = max(ans,x);
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}