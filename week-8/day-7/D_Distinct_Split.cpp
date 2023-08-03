#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    set<char>ch;
    string s;   cin>>s;
    int a[n]={0},b[n] = {0};
    for(int i=0;i<n;i++){
        ch.insert(s[i]);
        a[i] = ch.size();
    }
    ch.clear();
    for(int i=n-1;i>=0;i--){
        ch.insert(s[i]);
        b[i] = ch.size();
    }
    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans = max(ans,a[i] + b[i+1]);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}