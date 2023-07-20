#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    if(n==1)cout<<-1<<endl;
    else if(n<=1000000){
        cout<<1<<" "<<n-1<<" "<<1<<endl;
    }else{
        ll a = 1000000;
        ll b = n/a;
        ll c = n%a;
        if(c==0)cout<<a<<" "<<b-1<<" "<<a<<endl;
        else cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}