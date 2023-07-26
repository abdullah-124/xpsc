#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int tt; cin>>tt;
    while(tt--){
        int a,b;    cin>>a>>b;
        if(a<=8 and a*b<=500)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}