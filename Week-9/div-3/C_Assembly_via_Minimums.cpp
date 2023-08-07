#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;   cin>>n;
    ll x = n *(n-1)/2;
    unordered_map<ll,ll>mp;
    ll a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll r = n-1;
    vector<ll>v;
    for(auto it : mp){
        if(r==it.second){
            v.push_back(it.first);
            r--;
        }
        else{
            ll i=r,j=0;
            while(i>0 and it.second!=j){
                j += i;
                v.push_back(it.first);
                i--;
            }
            r = i;
        }
    }
    for(auto it : v){
        cout<<it<<" ";
    }
    int m = v.size();
    while(m != n){
        cout<<1000000000<<" ";
        m++;
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}