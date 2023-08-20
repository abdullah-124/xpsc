#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int sum=0,ans=INT_MAX;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
    for(int i=0;i<=(1<<n);i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cnt+=a[j];
            }
        }
        ans = min(ans,abs(2*cnt - sum));
    }
    cout<<(ans)<<endl;
}
int main(){
    fastread()
    int t=1; // cin>>t;
    while(t--)solve();
    return 0;
}