#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        int l,r;    cin>>l>>r;
        int ans = (2*r - 2*l )+1;
        cout<<ans<<endl;
    }
    return 0;
}