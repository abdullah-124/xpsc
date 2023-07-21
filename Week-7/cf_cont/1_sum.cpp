#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;  cin>>a>>b>>c;
    if(a+b>=10)cout<<"YES\n";
    else if(a+c>=10)cout<<"YES\n";
    else if(b+c>=10)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}