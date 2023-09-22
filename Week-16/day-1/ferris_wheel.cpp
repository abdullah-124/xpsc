#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt = 0;
    sort(a,a+n);
    int x = 0;
    for(int i=n-1;i>=x;i--){
        if(a[i]+a[x]<=k){
            x++;
        }
        cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}