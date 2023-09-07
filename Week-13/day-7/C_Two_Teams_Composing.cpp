#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    map<int,int>mp;
    int mx = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        mx = max(mx,mp[a[i]]);
    };
    int dst = mp.size()-1;
    int ans = max(min(mx-1,dst+1),min(mx,dst));
    cout<<ans<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}