#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = n;
    ll seg_sum = 0;
    for(int i=0;i<n;i++){
        seg_sum += a[i];
        ll sum = 0;
        int len = 0, mxLen = i+1;
        bool possible = false;
        for(int j=i+1;j<=n;j++){
            if(j==n){
                if(sum == seg_sum)possible = true;
                break;
            }
            if(sum+a[j] > seg_sum)break;
            if(sum = seg_sum){
                mxLen = max(len,mxLen);
                sum = 0;
                len = 0;
            }
            sum += a[j];
            len++;
        }
        if(possible) ans = min(ans,mxLen);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}