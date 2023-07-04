#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string res = "";
    for(int i = 9; i>0;i--){
        if(n >= i){
            res = char('0' + i) + res;
            n -= i;
        }
    }
    cout<<res<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}