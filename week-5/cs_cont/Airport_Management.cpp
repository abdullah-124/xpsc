#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],d[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>d[i];
    unordered_map<int,int>mp;
    
    int cnt = 0;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        mp[d[i]]++;
        int mx = max(mp[a[i]],mp[d[i]]);
        cnt = max(cnt,mx);
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}