#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int m;  cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    int orr = 0;
    for(int i=0;i<m;i++){
        cin>>b[i];
        orr = orr | b[i];
    }
    int x = 0,y=0;
    for(int i=0;i<n;i++){
        x = x xor a[i];
        y = y xor (a[i] | orr);
    }
    if(x>y)swap(x,y);
    cout<<x<<' '<<y<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}