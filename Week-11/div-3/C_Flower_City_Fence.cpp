#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int mx= 0;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i],mx=max(a[i],mx);
    if(mx>n)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}
/* 
|
| 
| | |
_ 
_
_ _ _
 */