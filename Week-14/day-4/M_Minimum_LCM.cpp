#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x =1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            x = n/i;
            break;
        }
    }
    cout<<x<<' '<<(n-x)<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}