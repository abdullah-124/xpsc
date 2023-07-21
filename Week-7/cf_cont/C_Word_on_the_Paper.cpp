#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n = 8;
    char ar[8][8];
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        for(int j=0;j<8;j++)ar[i][j]= s[j];
    }
    string ans = "";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[j][i] !='.')ans+=ar[j][i];
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