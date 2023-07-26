#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x,ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x&1)ans++;
    }
    if(ans&1)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}