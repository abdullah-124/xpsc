#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll gcd_odd = arr[1], gcd_evn = arr[0];
    for(int i=2;i<n;i++){
        if(i%2==0){
            gcd_evn = __gcd(gcd_evn,arr[i]);
        }
        else 
            gcd_odd = __gcd(gcd_odd,arr[i]);
    }
    bool odd = true,evn = true;
    for(int i=0;i<n;i++){
        if(i % 2 == 0 && arr[i] % gcd_odd == 0){
            evn = false;
        }
        if(i % 2 == 1 && arr[i] % gcd_evn == 0){
            odd = false;
        }
    }
    if(!odd & !evn)cout<<0<<endl;
    else{
        if(evn)cout<<gcd_odd<<endl;
        else cout<<gcd_evn<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}