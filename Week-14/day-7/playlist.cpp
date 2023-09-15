#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int cnt = 0;
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>mp;
    int i=0,j=0,mx=0;
    while(j<n){
        if(mp.find(a[j])==mp.end() or mp[a[j]]==0){
            mp[a[j]]++;
            cnt++;
            mx = max(cnt,mx);
            j++;
        }
        else {
            cnt--;
            mp[a[i]]--;
            i++;
        }
    }
    cout<<mx<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}