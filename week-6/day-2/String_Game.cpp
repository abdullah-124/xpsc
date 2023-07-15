#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    stack<char>st;
    int cnt = 0;
    for(auto it : s){
        if(!st.empty() and st.top() != it){
            cnt++;
            st.pop();
        }
        else st.push(it);
    }
    if(cnt&1)cout<<"Zlatan\n";
    else cout<<"Ramos\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}