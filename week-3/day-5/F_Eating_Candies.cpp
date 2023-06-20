#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    int arr[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    int ac=0,bc=n-1,ans = 0;
    ll als = 0,bos=0;
    while(als <= sum/2 && bos <= sum/2){
        if(als == bos) ans = ac+(n-1-bc);
        if(als > bos){
            bos += arr[bc];
            bc--;
        }
        else {
            als += arr[ac];
            ac++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}