#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const long long mod = 1e9+7;
void solve(){
    int n,k;    cin>>n>>k;
    ll a = 1;
    for(int i=0;i<k;i++)a = (a*n)%mod;
    cout<<a<<endl; 
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}