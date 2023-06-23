#include <bits/stdc++.h>
#define fastread()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define ll long long
using namespace std;
vector<int> ans;
bool palindrome(int n)
{
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev == s;
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
    fastread() for (int i = 0; i < 1 << 15; i++)
    {
        if (palindrome(i))
        {
            // cout<<i<<" ";
            ans.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}