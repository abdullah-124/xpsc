#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;    cin>>a>>b;
    int num = a*b;
    if(num >= 10000 && num <=99999)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)solve();

    return 0;
}