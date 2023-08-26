#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
bool prime[10000000];
void solve(){
    ll n;    cin>>n;
    ll x = sqrtl(n);
    if(prime[x]==0 and x*x==n)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    for(long long c=2;c*c<=1000000;c++){
        if(!prime[c]){
            for(int j=c*c;j<=1000000;j+=c){
                 prime[j]=1;   
            }
        }    
    }
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}