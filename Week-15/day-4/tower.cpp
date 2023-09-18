#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        auto it = upper_bound(v.begin(),v.end(),x);
        if(it==v.end())v.push_back(x);
        else *it = x;
    }
    cout<<v.size()<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}