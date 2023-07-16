#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    string r = "";
    int fr[26] = {0};
    int odc=0,evc=0;
    for(int i=n-1;i>=0;i--){
        r += s[i];
        fr[s[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(fr[i] % 2==1)odc++;
        else evc++;
    }
    if(odc>1)cout<<0<<endl;
    else if(odc==1 and s==r){
        cout<<2<<endl;
    }
    else cout<<1<<endl;

}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}