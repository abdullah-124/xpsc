#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    string x = s;
    sort(x.begin(),x.end());
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i] != x[i])v.emplace_back(i+1);
    }
    if(v.size()==0)cout<<0<<endl;
    else {
        cout<<1<<endl;
        cout<<v.size()<<" ";
        for(auto it:v)cout<<it<<' ';
        cout<<'\n';
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}