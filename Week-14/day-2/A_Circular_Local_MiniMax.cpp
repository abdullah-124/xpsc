#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n&1)cout<<"NO\n";
    else {
        sort(a,a+n,greater<int>());
        int b[n];
        for(int i=0;i<n/2;i++){
            b[2*i] = a[i];
            b[(2*i)+1] = a[i+n/2];
        }
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1]){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++)cout<<b[i]<<' ';
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}