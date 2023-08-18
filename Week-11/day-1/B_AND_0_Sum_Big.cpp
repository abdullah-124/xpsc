#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const int mod = 1e7+9;
void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
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