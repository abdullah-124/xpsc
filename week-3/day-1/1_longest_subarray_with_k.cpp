#include <bits/stdc++.h>
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
    fastread() int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0;
    int i = 0, j = 0, cnt = 0, mx = 0;
    while (j < n)
    {
        sum += a[j];
        if (sum > k)
        {
            while (sum > k)
            {
                sum -= a[i];
                i++;
                // cnt--;
            }
        }
        if (sum == k)
        {
            cnt = j - i + 1;
            mx = max(cnt, mx);
        }
        j++;
    }
    cout<<mx<<endl;
    return 0;
}