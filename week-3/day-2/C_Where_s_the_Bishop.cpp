<<<<<<< HEAD
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
    int n = 8;
    char brd[n][n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            brd[i][j] = s[j];
        }
    }
    int x =0,y=0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
        {
            if (brd[i][j] == '#')
            {
                if ((brd[i - 1][j - 1] && brd[i - 1][j + 1] == '#') && (brd[i + 1][j - 1] == '#' && brd[i + 1][j + 1] == '#'))
                {
                    x = i+1,
                    y = j+1;
                    break;
                }
            }
        }
    cout<<x<<" "<<y<<endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
=======
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
    int n = 8;
    char brd[n][n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            brd[i][j] = s[j];
        }
    }
    int x =0,y=0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
        {
            if (brd[i][j] == '#')
            {
                if ((brd[i - 1][j - 1] && brd[i - 1][j + 1] == '#') && (brd[i + 1][j - 1] == '#' && brd[i + 1][j + 1] == '#'))
                {
                    x = i+1,
                    y = j+1;
                    break;
                }
            }
        }
    cout<<x<<" "<<y<<endl;
}
int main()
{
    fastread() int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
>>>>>>> ca451056a9aada71eff89a38bbe4415a74704d4a
}