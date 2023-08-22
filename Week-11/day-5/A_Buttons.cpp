#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    a += (c-c/2);
    b += c/2;
    if(a>b)cout<<"First\n";
    else cout<<"Second\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}