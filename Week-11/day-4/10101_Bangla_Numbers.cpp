#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(ll n){
    if(n >= 10000000){
    solve(n/10000000);
    cout<<" kuti";
    n%=10000000;
    }
    if(n >= 100000){
    solve(n/100000);
    cout<<" lakh";
    n%=100000;
    }
    if(n >= 1000){
    solve(n/1000);
    cout<<" hajar";
    n%=1000;
    }
    if(n >= 100){
    solve(n/100);
    cout<<" shata";
    n%=100;
    }
    if(n)
    cout<<" "<<n;
}
int main(){
    fastread()
    ll n,c=1;
    while(cin>>n){
        if(n==0)break;
        cout<<c++<<".";
        solve(n);
        cout<<endl;
    }
    return 0;
}