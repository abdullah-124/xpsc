#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    bool vis[n+1] = {false};
    int cnt =0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        vis[x] = true;
        if(x>1 and !vis[x-1])cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}