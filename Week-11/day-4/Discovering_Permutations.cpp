#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    string x = "";
    map<string,int>mp;
    for(int i=0;i<n;i++){
        x += ('A'+i);
    }
    string tmp = x;
    mp[x]++;
    for(int i=0;i<k;i++){
        cout<<tmp<<endl;
        next_permutation(tmp.begin(),tmp.end());
        if(tmp == x)break;
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    int cs = 1;
    while(t--){
        cout<<"Case "<<cs++<<":\n";
        solve();
    }
    return 0;
}