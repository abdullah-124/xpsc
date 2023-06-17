#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;    cin>>a>>b;
    if((a+b)%2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--)solve();

    return 0;
}