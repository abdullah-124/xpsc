#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int ans=0, n = s.size();
    set<char>st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
        //cout<<s[i];
        if(st.size()>3){
            st.clear();
            ans++;
            //cout<<endl;
            st.insert(s[i]);
        }
    }
    if(st.empty())cout<<ans<<endl;
    else cout<<ans+1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}