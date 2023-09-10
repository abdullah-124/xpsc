#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)cin>>a[i],mp[a[i]]=i;
    string s;   cin>>s;
    vector<int>ones,zeros;
    for(int i=0;i<n;i++){
        if(s[i]=='0')zeros.push_back(a[i]);
        else ones.push_back(a[i]);
    }
    sort(a,a+n,greater<int>());
    sort(ones.begin(),ones.end(),greater<int>());
    sort(zeros.begin(),zeros.end(),greater<int>());
    int b[n];
    int x = 0;
    for(auto it:ones){
        b[mp[it]] = a[x];
        x++;
    }
    for(auto it:zeros){
        b[mp[it]] = a[x];
        x++;
    }
    for(int i=0;i<n;i++)cout<<b[i]<<' ';
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}