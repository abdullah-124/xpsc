#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    int nm = s[n-1] - '0';
    if(nm%2==0){
        cout<<0<<endl;
        return;
    }
    nm = s[0] - '0';
    if(nm%2==0){
        cout<<1<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        nm = s[i] - '0';
        if(nm%2==0){
            cout<<2<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}