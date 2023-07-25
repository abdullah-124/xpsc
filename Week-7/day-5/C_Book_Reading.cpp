#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n,m; cin>>n>>m;
    ll sum = 0;
    ll dsum = 0;
    for(ll i=1;i<=10;i++){
        ll x = m * i;
        x = x%10;
        dsum+=x;
    }
    ll a = m * 10;
    ll b = n/a;
    sum = dsum * b;
    ll e = n%a;
    int i=1;
    while(e>m){
        int x = 
    }
    cout<<sum<<endl;

}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}

/* 
14 => 4
28 => 8
42 => 2 
56 -> 6
70 -> 0
84 -> 4
98 -> 8
112 -> 2
126 -> 6
140 => 0
20 * 2-
 */