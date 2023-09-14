#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;  cin>>n;
    int a[n];
    ll tot = 0;
    for(int i=0;i<n;i++)cin>>a[i],tot+=a[i];
    ll mn = 1e9;
    for(int i=0;i< (1<<n);i++){
        ll cal = 0;
        for(int j=0;j<n;j++){
            if(i &(1<<j))cal += a[j];
        }
        mn = min(mn, abs(cal-(tot-cal)));
    }
    cout<<mn<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}