#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int m;  cin>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++){
        int x;  cin>>x;
        int ub = lower_bound(a,a+n,x)-a;
        cout<<ub<<' ';
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1; // cin>>t;
    while(t--)solve();
    return 0;
}