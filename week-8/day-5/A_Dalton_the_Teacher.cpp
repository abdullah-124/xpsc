#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int cnt = 0;
    int t;
    for(int i=1;i<=n;i++){
        cin>>t;
        if(i==t)cnt++;
    }
    int ans = cnt/2 + cnt%2;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}