#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    int ans = 0,cnt = 0;
    for(int i=0;i<n;i++){
        cnt++;
        if(i==n-1 or s[i] != s[i+1]){
            ans = max(ans,cnt);
            cnt = 0;
        }
    }
    cout<<ans+1<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}