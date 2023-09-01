#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(st.empty() or s[i]=='A')st.push('A');
        else if(st.size())st.pop();
    }
    cout<<st.size()<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}