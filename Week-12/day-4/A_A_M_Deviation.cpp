#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int x = abs((a+c) - 2*b);
    if(x%3)cout<<1<<endl;
    else cout<<0    <<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}