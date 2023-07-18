#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int tt; cin>>tt;
    while(tt--){
        int a,b;    cin>>a>>b;
        int c = b * 36;
        if(c>=a)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}