#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;  cin>>a>>b>>c;
    if((a >= b && a<=c) || (a<=b && a>=c)) cout<<a<<endl;
    else if((b >= a && b <= c) || (b <= a && b>=c)) cout<<b<<endl;
    else cout<<c<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}