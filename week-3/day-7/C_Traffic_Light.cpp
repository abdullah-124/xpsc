#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;   cin>>n;
    char c; cin>>c;
    string s;   cin>>s;
    s+=s;
    n*=2;
    if(c == 'g'){
        cout<<0<<endl;
        return;
    }
    ll mx = 0,cnt =0;
    bool flg = false;
    for(int i=0;i<n;i++){
        if(s[i] == 'g'){
            mx = max(cnt,mx) ;
            flg = false;
        }
        if(flg == false and s[i] == c){
            flg = true;
            cnt = 0;
        }
        if(flg)cnt++;
    }
    cout<<mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}