#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    if(n<k or n%k!=0){
        cout<<1<<endl;
        cout<<n<<endl;
    }else{
        cout<<2<<endl;
        cout<<1<<" "<<(n-1)<<endl;
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}