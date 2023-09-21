#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    if(s[0]!='a' and s[1]!='b' and s[2]!='c')cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}