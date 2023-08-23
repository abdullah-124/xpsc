#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int t,mn = INT_MAX,mx = INT_MAX;
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>t;
        if(mx>t){
            mx = t;
            continue;
        }
        if(mn >t){
            ans++;
            mn = min(t,mn);
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}