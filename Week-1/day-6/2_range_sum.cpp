#include <iostream>
using namespace std;
typedef long long ll;
void solve(ll a, ll b)
{
    if (a < b)
        swap(a, b);
    ll sum = (a - b + 1) * (a + b) / 2;
    cout << sum << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
