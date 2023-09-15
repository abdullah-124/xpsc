#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = INT_MAX;
    for(int i=1;i<101;i++){
        int cnt =0;
        for(int j=0;j<n;){
            if(a[j]!=i)cnt++,j+=k;
            else j++;
        }
        ans = min(cnt,ans);
    }
    cout<<ans<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}