#include <bits/stdc++.h>
#define fastread()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define ll long long
using namespace std;
void solve()
{
    int n,x;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    int ans = mp.size();
    if((n-ans)%2)ans--;
    cout<<ans<<endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}