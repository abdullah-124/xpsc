#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string t; cin>>t;
    if(n==5){
        string c = "Timur";
        for(int i=0;i<n;i++){
            bool flg = false;
            for(int j=0;j<n;j++){
                if(c[i] == t[j]){
                    flg = true;
                    break;
                }
            }
            if(!flg){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}