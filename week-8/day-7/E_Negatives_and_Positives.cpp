#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],ng=0,ps=0,nv=-1e9,pv=1e9;
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += abs(a[i]);
        if(a[i]<0)ng++,nv = max(nv,a[i]);
        else ps++,pv = min(pv,a[i]);
    }
    if(ng%2!=0){
        if(abs(nv)<=pv)sum += (2*nv);
        else sum -= (2*pv);
    }
    cout<<sum<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}