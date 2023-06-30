#include<iostream>
#include<cmath>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    ll a;   cin>>a;
    ll n = sqrt(a);
    ll prd = 1;
    for(ll i=1;i<=n;i++){
        if(a % i == 0){
            ll b = a/i;
            prd *= (i*b);
        }
    }
    cout<<prd<<" "<<1<<endl;
    return 0;
}