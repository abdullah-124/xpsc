#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int t,ans = 0;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>t;
        if(s.count(t) == 1)s.erase(t);
        else s.insert(t);
        int x = s.size();
        ans = max(ans,x);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}