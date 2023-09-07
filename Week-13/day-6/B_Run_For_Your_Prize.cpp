#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        x = min(x-1,1000000-x);
        ans = max(x,ans);
    }
    cout<<ans<<endl;

}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}