#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int q;cin>>q;
    while(q--){
        int u,v;    cin>>u>>v;
        int x = lower_bound(a,a+n,u)-a;
        int y = upper_bound(a,a+n,v)-a;
        cout<<y-x<<' ';
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