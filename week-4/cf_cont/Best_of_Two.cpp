#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a[3],b[3];
    for(int i=0;i<3;i++)cin>>a[i];
    for(int i=0;i<3;i++)cin>>b[i];
    sort(a,a+3);
    sort(b,b+3);
    if(a[1]+a[2] > b[1]+b[2])cout<<"Alice\n";
    else if(a[1]+a[2] < b[1]+b[2])cout<<"Bob\n";
    else cout<<"Tie\n";
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}