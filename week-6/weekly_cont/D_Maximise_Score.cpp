#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 50000;
    for(int i=0;i<n;i++){
        if(i==0){
            ans=min(ans,(abs(a[i]-a[i+1])));
        }
        else if(i==n-1){
            ans=min(ans,abs(a[i]-a[i-1]));
        }
        else{
            ans=min(ans,max(abs(a[i]-a[i+1]),abs(a[i]-a[i-1])));
        }ans=min(ans,max(abs(a[i]-a[i+1]),abs(a[i]-a[i-1])));
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}