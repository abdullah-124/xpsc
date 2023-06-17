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
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt = 0,idx = 1;
    for(int i=0;i<n;i++){
        if(idx < arr[i]){
            cnt += (arr[i]-idx);
            idx += arr[i] - idx;
        }
        idx++;
    }
    cout<<cnt<<endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}