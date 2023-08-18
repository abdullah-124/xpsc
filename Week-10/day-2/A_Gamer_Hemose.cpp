#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<int>());
    int cnt = 0;
    for(int i=0;i<n;i++){
        k = k-a[i];
        if(k<=0){
            break;
        }else cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}