#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void div(ll n){

}
int main(){
    fastread()
    int tt; cin>>tt;
    while(tt--){
        ll n;   cin>>n;
        if(n & (n-1)>0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}