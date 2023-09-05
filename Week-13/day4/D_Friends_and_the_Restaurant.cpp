#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int c[n];
    for(int i=0;i<n;i++)c[i] = b[i]-a[i];
    sort(c,c+n);
    int cnt = 0;
    int l=0,r=n-1;
    //for(int i=0;i<n;i++)cout<<c[i]<<' ';
    while(l<r){
        if(c[l]+c[r]>=0){
            cnt++;
            r--;
        }
        l++;
    }
    
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}