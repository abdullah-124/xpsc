#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    set<string>mp;
    for(int i=0;i<k;i++){
        int u,v;    cin>>u>>v;
        u--;
        string t = s;
        sort(t.begin()+u,t.begin()+v);
        mp.insert(t);
    }
    
    cout<<mp.size()<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}