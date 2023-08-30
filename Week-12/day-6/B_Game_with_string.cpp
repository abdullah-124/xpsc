#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int a[26] = {0};
    stack<char>st;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(st.empty())st.push(s[i]);
        else if(st.top()==s[i]){
            st.pop();
            cnt++;
        }
        else st.push(s[i]);
    }
    if(cnt&1)cout<<"Yes\n";
    else cout<<"No\n";
    
}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}