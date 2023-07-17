#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c,d;    cin>>a>>b>>c>>d;
    int p = max({a,b,c,d});
    int sum = a+b+c+d;
    sum -= p;
    if(p>sum)cout<<"YES\n";
    else cout<<"NO\n";
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}