#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[200005];
    int b[200005] = {0};
    bool vis[200005] = {false};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int p = lower_bound(a, a + n, a[i] *k) - a;
            if (p + b[p] >= n or a[p + b[p]] != a[i] *k) ans += 1;
            else { vis[i] = vis[p + b[p]] = true; b[p] += 1; }
        }
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