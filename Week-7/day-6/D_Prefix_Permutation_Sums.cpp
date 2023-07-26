#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    ll ttl = n*(n-1)/2;
    if(a[n-2]>ttl){
        cout<<"NO"<<'\n';
        return;
    }
    vector<ll>v;
    for(int i=0;i<n-1;i++){
        if(i==0)v.push_back(a[i]);
        else {
            v.push_back(a[i]-a[i-1]);
        }
    }
    if(a[n-2]==ttl){

    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}