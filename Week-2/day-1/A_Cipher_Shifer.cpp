#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string ans = "";
    char x = '\0';
    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        if(x == '\0') x = c;
        else if(c == x){
            ans += c;
            x = '\0';
        }
        
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}