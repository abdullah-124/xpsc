#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans = 0;
    for(int i=30;i>=0;i--){
        ll cnt = 0;
        for(int j=0;j<n;j++){
            if(a[j] >= (1<<i) and a[j]< 1<<(i+1)){
                cnt++;
            }
        }
        ans += (cnt*(cnt-1))/2;
    }
    
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}