#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int l=0,r=0;
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])cnt++;
    }
    if(cnt <=1)cout<<0<<endl;
    else{
        for(int i=0;i<n-1;i++)if(a[i]==a[i+1]){
            l = i+1;
            break;
        }
        for(int i=n-1;i>0;i--)if(a[i]==a[i-1]){
            r = i-1;
            break;
        }
        if((r-l)<=1)cout<<1<<endl;
        else cout<<r-l<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}