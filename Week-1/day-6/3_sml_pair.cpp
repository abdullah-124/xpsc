#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int mn = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int res = arr[i] + arr[j] + j - i;
                mn = min(res, mn);
            }
        }
        cout << mn << endl;
    }
    return 0;
}