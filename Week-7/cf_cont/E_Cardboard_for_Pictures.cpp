#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    ll c;   cin>>c;
    ll ar[n];
    ll sum = 0,v=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        v += ar[i]*ar[i];
        sum += ar[i];
    }
    c -= v;
    c = c/4;
    c = c/n;
    sum /= 2*n;
    ll res = sqrtl(sum*sum + c);
    res -= sum;
    cout<<res<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}