#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    vector<int>v;
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>=i)continue;
        ans += (long long)(lower_bound(v.begin(), v.end(), arr[i]) - v.begin());
		v.push_back(i);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}