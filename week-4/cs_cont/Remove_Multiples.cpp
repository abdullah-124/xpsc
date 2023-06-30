#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll k,n;    cin>>k>>n;
    ll sumK = (k*(k+1))/2;
    ll sum = 0;
    ll t;
    for(int i=0;i<n;i++){
        cin>>t;
        sum += t;
    }
    ll cst = sumK - sum;
    cout<<cst<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}