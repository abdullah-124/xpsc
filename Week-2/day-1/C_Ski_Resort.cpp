#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll c = 0,ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i] <= q)c++;
        else{
            if(c >= k){
                c = c-k + 1;
                ans += (c*(c+1)/2);
            }
            c=0;
        }
    }
    if(c >= k) {
        c = c-k + 1;
        ans += (c*(c+1)/2);
    }
    cout<<ans<<endl; 
}
int main(){
    fastread()
    int t;
    cin>> t;
    while(t--)solve();
    return 0;
}