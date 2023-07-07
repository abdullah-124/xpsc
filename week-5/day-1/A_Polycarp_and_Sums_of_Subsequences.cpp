#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    //int n;    cin>>n;
    int n = 7;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<a[0]<<" "<<a[1]<<" "<<a[n-1]-a[0]-a[1]<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}