#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,t;    cin>>n>>t;
    int ans = min(n,t);
    if(t>n){
        ans += (t-n)*2;
    }
    cout<<ans<<endl;

}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}