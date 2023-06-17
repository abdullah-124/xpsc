#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int flag[N];
int main()
{
    int n, m, k;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            flag[arr[i][j]]++;
        }
    }
    cin >> k;
    if (flag[k] != 0)
        cout << "will not take number" << endl;
    else
        cout << "will take number" << endl;
    return 0;
}