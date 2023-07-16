#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    int x = n-k+1;
    int y = n - 2*(k-1);
    if(x>0 && x&1){
        cout<<"YES\n";
        cout<<x<<" ";
        for(int i=1;i<k;i++)cout<<"1 ";
        cout<<endl;
    }
    else if(y>0 && y%2==0){
        cout<<"YES\n";
        cout<<y<<" ";
        for(int i=1;i<k;i++)cout<<"2 ";
        cout<<endl;
    }
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}