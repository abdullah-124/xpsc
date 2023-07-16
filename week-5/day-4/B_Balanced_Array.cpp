#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    if(n<=2 or n%4!=0)cout<<"NO\n";
    else{
        cout<<"YES\n";
        ll es = 0,os=0;
        for(int i=2;i<=n;i+=2){
            es+=i;
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            if(i==n-1){
                ll x = es-os;
                cout<<x<<endl;
            }
            else cout<<i<<" ";
            os+=i;
        }
    }

}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}