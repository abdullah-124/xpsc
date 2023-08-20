#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int xr = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        xr = xr ^ a[i];
    }
    if(xr==0)cout<<"YES\n";
    else {
        int x = 0,cnt= 0;
        for(int i=0;i<n;i++){
            x = x^a[i];
            if(x==xr)cnt++,x=0;
        }
        if(cnt>1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}