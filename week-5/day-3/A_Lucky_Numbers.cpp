#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int cal(int n){
    int a= 0,b=10;
    while(n>0){
        int dgt = n % 10;
        n/=10;
        a = max(a,dgt);
        b = min(b,dgt);
    }
    return a-b;
}
void solve(){
    int a,b;
    cin>>a>>b;
    int ans = 0,ln = 0;
    for(int i=a;i<=b;i++){
        int mx = cal(i);
        //cout<<i<<"-> "<<mx<<endl;
        if(mx >= ln){
            ans = i;
            ln = mx;
        }
        if(mx == 9)break;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}