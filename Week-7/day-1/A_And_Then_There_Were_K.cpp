#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;   cin>>n;
    for(int i=31;i>=0;i--){
        if(n&(1<<i)){
            cout<<(1<<i)-1<<endl;
            return;
        }
    }
    cout<<0<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}