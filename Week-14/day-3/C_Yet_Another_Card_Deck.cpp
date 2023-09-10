#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    while(k--){
        int x;  cin>>x;
        int res = find(a,a+n,x)-a;
        cout<<res+1<<' ';
        rotate(a,a+res,a+res+1);
    }
    cout<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}