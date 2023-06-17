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
    char arr[2][n];
    bool ans = true;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[0][i] == 'G' && arr[1][i] == 'B') || arr[0][i] == 'B' && arr[1][i] == 'G')
            continue;
        if(arr[0][i]!=arr[1][i]){
            ans = false;
            break;
        }
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}