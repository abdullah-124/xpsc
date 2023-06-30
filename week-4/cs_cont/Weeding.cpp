#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,d,s;    cin>>n>>d>>s;
    bool flg = true;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        
        if(t+s-1>d){
            flg = false;
        }
    }
    flg ? cout<<"Yes\n" : cout<<"No\n";
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}