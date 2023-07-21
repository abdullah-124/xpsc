#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int xr = 0;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        xr = xr^t;
    }
    if(n%2==0 and xr !=0)cout<<-1<<endl;
    else cout<<xr<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}