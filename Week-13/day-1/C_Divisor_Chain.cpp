#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>v;
    int now=1;
    while(now<=n){
        v.push_back(now);
        now = now<<1;
    }
    
    // for(auto it : v)cout<<it<<" ";
    // cout<<endl;
    if(v.back()!=n){
        int x = n - v.back();
        for(int i=31;i>=0;i--){
            if(x & (1<<i))v.push_back(v.back()+(1<<i));
        }
    }
    reverse(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(auto it : v)cout<<it<<" ";
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}