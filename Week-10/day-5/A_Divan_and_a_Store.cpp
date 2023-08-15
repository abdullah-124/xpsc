#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,l,r,k;    cin>>n>>l>>r>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(k<=0)break;
        if(a[i]>=l and a[i]<=r and k-a[i]>=0){
            cnt++;
            k -= a[i];
        }
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}