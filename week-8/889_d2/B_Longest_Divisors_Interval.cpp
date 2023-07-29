#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;   cin>>n;
    int mx = 0,cnt = 0;
    for(int i=1;i<=10000;i++){
        if(n%i==0)cnt++;
        else cnt = 0;
        mx = max(cnt,mx);
    }
    cout<<mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}