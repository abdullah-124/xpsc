#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int ans = n/2+n%2;
    int l=1,r=3*n;
    cout<<ans<<endl;
    while(l<r){
        cout<<l<<" "<<r<<'\n';
        l+=3,r-=3;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}