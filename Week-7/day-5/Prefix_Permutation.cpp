#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    if(n&1)cout<<-1<<endl;
    else {
        for(int i=1;i<=n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }cout<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}