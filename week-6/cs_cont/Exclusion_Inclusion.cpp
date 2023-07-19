#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    for(int i=1;i<n;i++){
        ar[i] += ar[i-1];
    }
    for(int i=n-1;i>=0;i--)cout<<ar[i]<<" ";
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}