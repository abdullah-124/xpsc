#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int c[3] = {0};
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        c[x%3]++;
    }
    int ans = c[0]+min(c[1],c[2])+((max(c[1],c[2])-min(c[1],c[2]))/3);
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}