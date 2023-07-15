#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string ans = "";
    if(n>=1 and n<=10)ans = "Lower Double\n";
    else if(n>=11 and n<=15)ans = "Lower Single\n";
    else if(n>=16 and n<=25)ans = "Upper Double\n";
    else ans = "Upper Single\n";
    cout<<ans;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}