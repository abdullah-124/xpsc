#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,m,k;  cin>>n>>m>>k;
    int x = 2*(m+k)+1;
    int y = (2*n)-1;
    cout<<min(x,y)<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}