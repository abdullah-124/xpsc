#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int k,n,w;  cin>>k>>n>>w;
    ll m = 0;
    for(int i=1;i<=w;i++)m += k*i;
    if(m<=n)cout<<0<<endl;
    else cout<<m - n<<endl;
    return 0;
}