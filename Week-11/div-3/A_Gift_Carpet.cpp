#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int m;  cin>>m;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    string s = "vika";
    int x = 0;
    for(int i=0;i<m;i++){
        bool flg = false;
        for(int j=0;j<n;j++){
            if(a[j][i]==s[x]){
                flg = true;
                break;
            }
        }
        if(flg)x++;
        if(x==4){
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