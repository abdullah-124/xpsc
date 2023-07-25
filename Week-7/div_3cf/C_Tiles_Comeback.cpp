#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;  cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    
    ll l = n;
    ll cnt = 0;
    for(int i=1;i<=n;i++){
        if(a[i]==a[1])cnt++;
        if(cnt==k){
            l = i;
            break;
        }
    }
    if(cnt<k){
        cout<<"NO\n";
        return;
    }
    else if(a[1]==a[n]){
        cout<<"YES\n";
        return;
    }
    else{
        cnt = 0;
        for(int i=n;i>l;i--){
            if(a[i]==a[n])cnt++;
        }
        if(cnt>=k)cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}