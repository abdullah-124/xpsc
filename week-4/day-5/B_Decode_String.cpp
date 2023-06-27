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
    char ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == '0')
            continue;
        if ((i+2<n and ar[i + 2] == '0') and (i+3>=n or ar[i+3] != '0'))
        {
            string s = to_string(ar[i] - '0');
            s += ar[i + 1];
            int x = stoi(s);
            char c = 96 + x;
            cout<<c;
            i += 2;
        }
        else{
            int x = ar[i] - '0';
            char c = 96 + x;
            cout<<c;
        }
    }
    cout << endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}