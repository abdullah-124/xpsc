#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll cnt = 0,sum=0;
    map<int,ll>mp;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum += a[i];
        sum %= n;
        while(sum<0)sum += n;
        if(mp.find(sum)!=mp.end())cnt += mp[sum];
        mp[sum]++;
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