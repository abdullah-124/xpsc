#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;  cin>>a>>b>>c;
    int x = abs(a-1);
    int y = abs(b-c) + (c-1);
    if(x==y)cout<<3<<endl;
    else if(x<y)cout<<1<<endl;
    else cout<<2<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}