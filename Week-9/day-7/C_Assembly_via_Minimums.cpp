#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x = n*(n-1)/2;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    sort(a,a+x);
    for(int i=0;i<x;i+=(--n))cout<<a[i]<<" ";
    cout<<1000000000<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}