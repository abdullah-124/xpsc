#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    string s;   cin>>s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    vector<char>o,e;
    for(int i=0;i<n;i++){
        if(i&1)o.push_back(s[i]);
        else e.push_back(s[i]);
    }
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    int i=0,j=0;
    string ans = "";
    while(i<e.size() or j<o.size()){
        if(i<e.size())ans+=e[i++];
        if(j<o.size())ans += o[j++];
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}