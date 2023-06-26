#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    string s;   cin>>s;
    unordered_map<int,set<char>>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]].insert(s[i]);
        if(mp[arr[i]].size()>1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}