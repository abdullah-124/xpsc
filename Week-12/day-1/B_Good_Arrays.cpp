#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll a,sum=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        if(a==1)cnt++;
    }
    if(sum >= cnt+n and n>1)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}