#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;    cin>>n>>k;
    long long m = pow(2,k);
    if(k>60)cout<<n+1<<endl;
    else cout<<min(n+1, m)<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}