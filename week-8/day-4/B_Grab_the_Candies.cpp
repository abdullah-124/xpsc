#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int oc =0,ec= 0;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        if(t%2)oc+=t;
        else ec+=t;
    }
    if(ec>oc)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}