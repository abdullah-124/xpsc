#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        if(s[i] == '1')v[i] = 2;
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(v[j] == 0){
                v[j] = 1;
                ans += i+1;
            }
            else if(v[j]==2)break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}