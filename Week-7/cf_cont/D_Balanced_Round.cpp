#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int ans= 0;
    int i=0,j=1,cnt=1;
    while(j<n){
        if(abs(a[j]-a[j-1])<=k)cnt++;
        else{
            ans =max(cnt,ans);
            cnt=1;
        }
        j++;
    }
    ans = max(cnt,ans);
    cout<<n-ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}