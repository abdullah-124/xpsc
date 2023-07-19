#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;  cin>>a>>b>>c;
    a += (c / 30);
    int ans = a/b;
    if(a%b)ans++;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}