#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>ans;
    vector<pair<int,int>>x;
    for(int i=0;i<n;i++){
        if(a[i]%k==0)ans.push_back(i+1);
        else x.push_back({a[i]%k,i+1});
    }
    sort(x.begin(),x.end(),[&](pair<int,int>p,pair<int,int>q){
        if(p.first==q.first)return (p.second<q.second);
        return p.first>q.first;
    });
    for(auto it : x){
        ans.push_back(it.second);
    }
    for(auto it : ans)cout<<it<<" ";
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}