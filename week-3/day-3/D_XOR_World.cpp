#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    ll a,b;    cin>>a>>b;
    ll sum = (b-a)*(a+b +1) / 2;
    ll ans = sum ^ a ^ b;
    cout<<ans<<endl;

    return 0;
}