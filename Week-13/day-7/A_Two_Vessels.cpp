#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int x = max(a,b);
    int y = min(a,b);
    int cnt = 0;
    int ans = (x-y)/(2*c);
    if((x-y)%(2*c))ans++;
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}