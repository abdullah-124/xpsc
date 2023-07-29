#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    string ans = "";
    
    int i=0,j=0;
    while(j<n){
        int cnt=0;
        while(s[i]==s[j] and j<n)cnt++,j++;
        if(cnt%2)ans+=s[i];
        else {
            ans+=s[i];
            ans+=s[i];
        }
        i=j;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}