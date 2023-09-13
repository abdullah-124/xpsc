#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int m;  cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int i=0,j=0;
    while(i<n or j<m){
        if(i==n and j<m){
            cout<<b[j]<<' ';
            j++;
        }else if(j==m and i<n){
            cout<<a[i]<<' ';
            i++;
        }
        else if(a[i] <b[j]){
            cout<<a[i]<<' ';
            i++;
        }
        else {
            cout<<b[j]<<' ';
            j++;
        }
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