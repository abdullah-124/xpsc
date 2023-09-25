#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll x,a=INT_MAX,b=INT_MAX;
    ll suma = 0,sumb = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        suma+=x;
        a = min(x,a);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        sumb+=x;
        b = min(x,b);
    }
    suma += (b*n);
    sumb += (a*n);
    cout<<min(suma,sumb)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}