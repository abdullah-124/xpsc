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
    ll n, k;
    cin >> n >> k;
    ll odd = (n + 1) / 2;
    if(n<2*k)
   {
    cout<<"NO"<<endl;
   } 
   else if(n==2*k)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    if((odd-k)%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}