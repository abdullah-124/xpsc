#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a,b;    cin>>a>>b;
    int x = a+b;
    if(a+b<=n-2 or (a==n and b==n))cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}