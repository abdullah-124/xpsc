#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n&1){
        cout<<4<<endl;
        cout<<1<<' '<<n-1<<endl;
        cout<<1<<' '<<n-1<<endl;
        cout<<n-1<<' '<<n<<endl;
        cout<<n-1<<' '<<n<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<1<<' '<<n<<endl;
        cout<<1<<' '<<n<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}