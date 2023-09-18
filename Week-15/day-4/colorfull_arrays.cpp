#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)cin>>a[i],mp[a[i]]++;
    int cnt[k+1] = {0};
    for(int i=0;i<n;i++){
        map<int,int>mp;
        for(int j=0;j<n;j++){
           int x = min(a[i],a[j]);
           cout<<x<<' ';
           mp[x]++;
           cnt[x] = max(cnt[x],mp[x]);
        }
        cout<<endl;
    }
    //for(int i=1;i<=k;i++)cout<<cnt[i]*2<<' ';
    cout<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}