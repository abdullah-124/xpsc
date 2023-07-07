#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int arr[n];
    int mx = -1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx = max(arr[i],mx);
    }
    int i=0,j=n-1;
    while(i<j){
        int xr = arr[i] ^ arr[j];
        mx = max(xr,mx);
        i++,j--;
    }
    cout<<mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}