#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int k = c/2;
    a = a+c-k;
    b = b+k;
    if(a>b)cout<<"First\n";
    else cout<<"Second\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}