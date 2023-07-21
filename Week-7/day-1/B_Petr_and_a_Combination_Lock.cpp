#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];  
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<(1<<n);i++){
        int ans = 0;
        for(int j=0;j<n;j++){
            if(i & (1<<j))ans+=a[j];
            else ans -= a[j];
        }
        if(ans % 360 == 0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    fastread()
    int t=1;
    while(t--)solve();
    return 0;
}