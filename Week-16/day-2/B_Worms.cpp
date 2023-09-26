#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b[n];

    for(int i=1;i<n;i++){
        a[i] += a[i-1];
        //cout<<a[i]<<' ';
    }
    int k;  cin>>k;
    while(k--){
        int x;  cin>>x;
        int lb = lower_bound(a,a+n,x)-a+1;
        cout<<lb<<endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}