#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    //G1
    //int a[i];
    //G2
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[0]!=1){
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<n;i++){
        int x = a[i];
        //cout<<x<<" ";
        if(x>a[i-1]){
            cout<<"NO\n";
            return;
        }
        a[i] = a[i]+a[i-1];
    }
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"YES\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}