#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 0;
    sort(a,a+n);
    for(int i=0;i<n-3;i+=3){
        ll x = a[i] + a[i+1] + a[i+2];
        if(x%3!=0){
            int r = x%3;
            a[i] += r;
            ans+=r;
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}