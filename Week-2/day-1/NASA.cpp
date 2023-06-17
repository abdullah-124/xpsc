#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
bool isPalindrome(int n)
{
    string s = to_string(n);
    string r = s;
    reverse(s.begin(), s.end());
    return r == s;
}
void solve()
{
    int fr[1 << 15] = {0};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        fr[arr[i]]++;
    }
    long long ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int k = arr[i] ^ ans[j];
            if(k>1<<15)continue;
            if(fr[k] != 0) ans1 += fr[k];
        }
    }
    cout<<(ans1 + n)/2<<endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i <= 1 << 15; i++)
    {
        if (isPalindrome(i))
            ans.push_back(i);
    }
    while (t--)
        solve();

    return 0;
}