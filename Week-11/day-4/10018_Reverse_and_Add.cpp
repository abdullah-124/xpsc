#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
ll rev(ll n){
    ll x = 0;
    while(n>0){
        ll dg = n%10;
        x *= 10;
        x+=dg;
        n /= 10;
    }
    
    return x;
}
// bool com(ll n){
//     string s = to_string(n);
//     reverse(s.begin(),s.end());
//     int x = stoll(s);
//     return x==n;
// }
void solve(){
    ll n;    cin>>n;
    int cnt=0;
    ll rn = rev(n);
    while(rn != n){
        n += rn;
        rn = rev(n);
        cnt++;
    }
    cout<<cnt<<" "<<n<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}