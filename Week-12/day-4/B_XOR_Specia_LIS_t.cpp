#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    bool flg = false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0 and a[i]<=a[i-1])flg = true;
    }
    if(n%2==0)flg=true;
    if(flg)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}