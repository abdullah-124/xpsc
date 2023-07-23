#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;   cin>>n;
    if(n==0)cout<<"1 7 2 3\n";
    else if(n==1)cout<<"1 4 3 2\n";
    else {
        cout<<(1ll<<32)<<" "<<(1ll<<33)<<" "<<1<<" "<<(n^1)<<endl;
    }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}