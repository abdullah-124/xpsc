#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(a[0]!=n){
        cout<<"NO\n";
        return;
    }
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        while(v.size()<a[i]){
            v.push_back(i+1);

        }
    }
    // cout<<"=========\n";
    // for(auto it : v)cout<<it<<" ";
    // cout<<"-----------------\n";
    for(int i=0;i<n;i++){
        if(a[i] != v[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}