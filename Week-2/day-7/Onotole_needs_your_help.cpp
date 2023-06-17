#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    ll n,t,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        ans = ans ^ t;
    }
    cout<<ans<<endl;
    return 0;
}