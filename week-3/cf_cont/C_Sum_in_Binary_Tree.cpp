#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int solve(){
    ll n;
    cin>>n;
    ll sum = n;
    while(n>0){
        sum += n/2;
        n /= 2;
    }
    cout<<sum<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}