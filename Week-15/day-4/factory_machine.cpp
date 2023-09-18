#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n],mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx = max(a[i],mx);
    }
    ll l=0,r=mx*k+1,ans=0;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll cnt = 0;
        for(int i=0;i<n;i++)cnt+= (mid/(ll)a[i]);
        if(cnt>=k){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}