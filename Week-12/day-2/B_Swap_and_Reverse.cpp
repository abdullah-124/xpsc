#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    string s;   cin>>s;
    string x = s;
    sort(x.begin(),x.end());
    for(int i=0;i<(n/2+(n%2));i++)cout<<x[i];
    for(int i=(n/2);i<n;i++)cout<<s[i];
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}