#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int mn = 1e9,mx = -1;
    int t;  
    for(int i=0;i<n;i++){
        cin>>t;
        mx = max(t,mx);
        mn = min(t,mn);
    }
    cout<<mx-mn<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}