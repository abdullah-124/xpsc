#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ps = 0;
    int t,r;
    for(int i=0;i<n;i++){
        cin>>t;
        r = min((t - a[i]), t - ps);
        cout<<r<<" ";
        ps = t;
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}