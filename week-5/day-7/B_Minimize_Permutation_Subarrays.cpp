#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        mp[x] = i;
    }
    if(mp[n] < min(mp[1], mp[2])) {
            cout << mp[n] << ' ' << min(mp[1], mp[2]) << '\n';
        } else if(mp[n] > max(mp[1], mp[2])) {
            cout << mp[n] << ' ' << max(mp[1], mp[2]) << '\n';
        } else {
            cout << mp[1] << ' ' << mp[2] << '\n';
        }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}