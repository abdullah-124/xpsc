#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int v = a/2 + a%2;
    if(v<=b)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}