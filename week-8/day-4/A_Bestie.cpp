#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int ans, g = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        g = __gcd(g,a[i]);
    }
    if(g==1)ans = 0;
    else if(__gcd(g,n)==1)ans = 1;
    else if(__gcd(g,n-1)==1)ans = 2;
    else ans = 3;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}