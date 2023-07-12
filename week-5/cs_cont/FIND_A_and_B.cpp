#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int x,y,z;  cin>>x>>y>>z;
    int a = x * y;
    if((x*y)%z==0)cout<<x*y<<" "<<z<<endl;
    else if((x*z)%y==0)cout<<x*z<<" "<<y<<endl;
    else if((z*y)%x==0)cout<<z*y<<" "<<x<<endl;
    else cout<<-1<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}