#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    if(n%2==0 and n%7==0)cout<<"Alice\n";
    else if(n%2==1 and n%9==0)cout<<"Bob\n";
    else cout<<"Charlie\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}