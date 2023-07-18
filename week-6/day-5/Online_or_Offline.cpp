#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    float r,d;    cin>>r>>d;
    float a = (r * 0.10);
    //cout<<a<<" ";
    r -= a;
    if(d==r)cout<<"EITHER\n";
    else if(r>d)cout<<"DINING\n";
    else cout<<"ONLINE\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}