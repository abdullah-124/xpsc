#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    if(n%2){
        cout<<"NO\n";
        return;
    }
    string a = s.substr(0,(n/2));
    string b = s.substr((n/2),n/2);
    //cout<<a<<" "<<b<<endl;
    if(a==b)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}