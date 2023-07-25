#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int S = 2e5+5;
    int ar[n+1] = {0};
    int mx = 0;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        ar[t]++;
        mx = max(mx,ar[t]);
    }
    cout<<n-mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}