#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b;    cin>>a>>b;
    int p = 0;
    if(a%2==0) p = 2;
    else if(a%3==0) p = 3;
    else if(a%5==0)p = 5;
    else p = 7;
    p += a;
    int c = b - p;
    if(c%2==0)cout<<c/2+1<<endl;
    else cout<<c/2+2<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}