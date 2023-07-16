#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    int x = n - (n%k);
    x += min(n%k,k/2);
    cout<<x<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}