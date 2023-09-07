#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int i=0;
    while(v[i] == v[n-i-1] and i<n)i++;
    if(i==n){
        cout<<"YES\n";
        return;
    }
    for(auto it : {v[i],v[n-i-1]}){
        auto a = v;
        a.erase(remove(a.begin(),a.end(),it),a.end());
        auto b = a;
        reverse(b.begin(),b.end());
        if(a==b){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}