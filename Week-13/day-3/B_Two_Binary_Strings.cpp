#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    int n = a.size();
    for(int i=0;i<n-1;i++){
        if(a[i]=='0' and a[i]==b[i] and a[i+1]=='1' and b[i+1] == a[i+1]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}