#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int m;  cin>>m;
    int a[n],b[m];
    int xr = 0;
    int cnt[32] = {0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        xr = a[i]^xr;
        for(int j=0;j<31;j++){
            if(a[i]&(1<<j))cnt[j]++;
        }
    }
    for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<31;i++){
            if(cnt[i]%2==0){
                for(int j=0;j<m;j++){
                    if(b[j]&(1<<i)){
                        for(int k=0;k<n;k++){
                            a[k] = a[k] | b[j];
                        }
                        break;
                    }
                }
            }
        }
        int x = 0;
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
            x = x ^ a[i];
        }
    if(n%2==0){
        
        cout<<x<<' '<<xr<<endl;
    }
    else cout<<xr<<' '<<x<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}