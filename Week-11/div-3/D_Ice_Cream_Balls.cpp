#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll x=0;
    while(1){
        if(x*(x+1)/2 >=n)break;
        x++;
    }
    cout<<x<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}