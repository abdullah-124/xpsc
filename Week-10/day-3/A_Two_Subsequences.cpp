#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.length();
    char x = s[0];
    int idx = 0;
    for(int i=0;i<n;i++){
        if(x>s[i]){
            x = s[i];
            idx = i;
        }
    }
    cout<<s[idx]<<" ";
    for(int i=0;i<n;i++){
        if(idx==i)continue;
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}