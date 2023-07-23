#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 1e9;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            ans = 0;
            break;
        }
        ans = min(abs(a[i]-a[i-1])/2+1,ans);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}