#include <bits/stdc++.h>
#define fastread()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
using namespace std;

int main()
{
    fastread() 
    int mn = INT_MAX, n,t;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        if(t%2==1)mn = min(t,mn);
        sum += t;
    }
    if(sum %2==1)
        sum -= mn;
    cout<<sum<<endl;
    return 0;
}