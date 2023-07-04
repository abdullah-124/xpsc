#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    sort(s.begin()+1, s.end()-1, greater<char>());
    int cst = 0;
    vector<int>v;
    v.push_back(1);
    cout<<s[0]<<" ";
    for(int i=1;i<n-1;i++){
        if((s[i] >= s[0] and s[i] <= s[n-1]) or (s[i] <= s[0] and s[i] >= s[n-1])){
            cout<<s[i]<<" ";
        }
    }
    cout<<s[n-1]<<endl;
    //cout<<s<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}