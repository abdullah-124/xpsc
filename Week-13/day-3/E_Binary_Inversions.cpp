#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int oc=0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(x==1)oc++;
        if(x==0)ans+=oc;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}