#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll x,y;    cin>>x>>y;
    if(x>y)swap(x,y);
    ll l=0,r=0;
    n--;
    while(n){
        if(l<=r)l+=x;
        else r+=y;
        n--;
    }
    cout<<max(l,r)+x<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}