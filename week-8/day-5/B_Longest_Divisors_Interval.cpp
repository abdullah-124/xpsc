#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;   cin>>n;
    int cnt = 0,ans=0;
    for(int i=1;i<=50;i++){
        if(n%(ll)i==0)cnt++;
        else {
            ans = max(cnt,ans);
            cnt = 0;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}