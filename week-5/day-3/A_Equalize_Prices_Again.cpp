#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int cst;cin>>cst;
        sum += cst;
    }
    int ans = (sum/n);
    if(sum % n)ans++;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}