#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

ll fun(ll x)
{
    if(x<=1)return x;
    ll sq = (x/2+x%2);
    return sq*sq + fun(x/2);
}
void solve(){
    ll a,b;
    cin>>a>>b;
    ll x = fun(max(a,b))-fun(min(a,b)-1);  
    cout<<x<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}