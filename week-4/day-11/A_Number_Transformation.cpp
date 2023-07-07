#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int a,b;    cin>>a>>b;
    if(b%a != 0)cout<<0<<" "<<0<<endl;
    else {
        int c = b/a;
        cout<<1<<" "<<c<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}