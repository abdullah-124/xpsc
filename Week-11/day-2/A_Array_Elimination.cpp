#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 0;
    for(int i=0;i<30;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(a[j] & (1<<i))cnt++;
        }
        ans = __gcd(ans,cnt);
    }
    for(int i=1;i<=n;i++){
        if(ans %i==0)cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}