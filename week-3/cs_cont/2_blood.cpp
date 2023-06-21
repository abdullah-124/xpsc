#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;cin>>n;
    unordered_map<string,int>mp;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        int c = mp[arr[i]];
        if(c>1){
            ans += c;
            mp[arr[i]] -= c;
        }
        else if(arr[i] == "O")ans++;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}