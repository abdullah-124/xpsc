#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    set<int>st;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i],st.insert(a[i]);
    if(st.size()>=3 or st.size()==n)cout<<n<<endl;
    else {
        int ans = ((n-2)/2)+2;
        cout<<ans<<endl;
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}