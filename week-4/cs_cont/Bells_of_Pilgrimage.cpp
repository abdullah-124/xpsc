#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c,d;    cin>>a>>b>>c>>d;
    ll sum = (ll) d;
    int t = c;
    if(t<=b){
        sum += (t * 10);
    }
    if(t>b){
        int r = t-b;
        sum +=  (ll)(b * 10);
        sum += (ll)(r * 5);
    }
    if(c == a)sum += (ll)20;
    cout<<sum<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}