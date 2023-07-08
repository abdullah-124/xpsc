#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bool ans = false;
    sort(a, a+n);
    for(int i=0;i<n;i++){
        if(a[i+1]-a[i] == 1)ans = true;
    }
    if(ans)cout<<2<<endl;
    else cout<<1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}