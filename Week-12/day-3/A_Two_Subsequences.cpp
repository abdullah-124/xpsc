#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    char c=s[0];
    int x = 0;
    for(int i=1;i<n;i++){
        if(s[i]<c){
            c=s[i];
            x = i;
        }
    }
    cout<<s[x]<<" ";
    for(int i=0;i<n;i++){
        if(i==x)continue;
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}