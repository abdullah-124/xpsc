#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;  cin>>n;
    string s;   cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'U')y++;
        else if(s[i]=='D')y--;
        else if(s[i]=='R')x++;
        else x--;
        if(x==1 and y==1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}