#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,x;    cin>>n>>x;
    string ans = "";
    if(abs(x) > n+1 or 1-n>x )ans = "-1";
    else {
        for(int i=0;i<n;i++){
            if(x>1)ans+="+",x--;
            else if(x==1)ans+="*";
            else ans+="-",x++;
        }
    }
    cout<<ans<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}