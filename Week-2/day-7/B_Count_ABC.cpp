#include <iostream>
#define fastread()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define ll long long
using namespace std;

int main()
{
    fastread() int n, c = 0;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (i>=2 && s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C')
            c++;
    }
    cout << c << endl;
    return 0;
}