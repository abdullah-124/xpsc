#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int a = (s[0] - '0')*10 + (s[1] - '0');
    int b = (s[3] - '0')*10 + (s[4] - '0');
    if(a<=12 && b<=12) cout<< "BOTH"<<endl;
    else if(a<=12) cout<< "MM/DD/YYYY"<<endl;
    else cout<< "DD/MM/YYYY"<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}