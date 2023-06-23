#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    ll xr=0,box=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int j=n-1;
    while(j>=0){
        if(a[j]>xr){
            box++;
            xr = 0;
        }
        xr = xr ^ a[j];
        j--;
    }
    cout<<box<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}