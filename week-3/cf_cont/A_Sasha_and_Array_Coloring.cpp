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
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    ll sum = 0;
    while(i<j){
        sum += (a[j]-a[i]);
        i++,j--;
    }
    cout<<sum<<endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}