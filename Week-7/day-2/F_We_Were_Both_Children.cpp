#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n+1]={0},cnt[n+1] = {0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>n)continue;
        cnt[a[i]]++;
    }
    ll ans = 0;
    for(int i=0;i<=n;i++){
        ll res = 0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                res += cnt[j];
                if(j*j != i){
                    res += cnt[i/j];
                }
            }
        }
        ans = max(ans,res);
    }
    cout<<ans<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}