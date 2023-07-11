#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    vector<int>v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        if(s[i] == 'R'){
            v.push_back(i+1);
        }
    }
    v.push_back(n+1);
    int mx = 0;
    for(int i=0;i<v.size()-1;i++){
        mx = max(mx,v[i+1]-v[i]);
    }
    cout<<mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}