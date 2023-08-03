#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i] += min(i+1,n+1-i);
    }
    sort(a,a+n);
    int cnt =0;
    ll sum = 0;
    for(int i=0;i<n;i++){
        if(k>=a[i])cnt++;
        else break;
        k-=a[i];
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}