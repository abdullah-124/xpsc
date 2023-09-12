#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    ll sum =0;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
    ll cur = 0,gcd = 1;
    for(int i=0;i<n-1;i++){
        cur+=a[i];
        sum-=a[i];
        gcd = max(gcd,__gcd(cur,sum));
    }
    cout<<gcd<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}