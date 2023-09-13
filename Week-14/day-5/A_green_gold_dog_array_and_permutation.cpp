#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a,a+n);
    int b[n];
    for(int i=0;i<n;i++){
        b[a[i].second] = n-i;
    }
    for(int i=0;i<n;i++)cout<<b[i]<<' ';
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}