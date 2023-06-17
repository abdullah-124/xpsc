#include <bits/stdc++.h>
#define fastread()                        \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define ll long long
using namespace std;
vector<int>gcd(int n){
    vector<int>v;
    for(int i=2;i<=n;i++){
        if(n%i==0)v.push_back(i);
    }
    return v;
}
int main()
{
    fastread() 
    int n;
    cin >> n;
    //sieve of eratosthenes
    bool prime[n + 1];
    prime[1] = false;
    for(int i=2;i<=n;i++)prime[i] = true;
    for (int i = 2; i*i <= n; i++)
    {
        if (prime[i]==true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    int count = 0;
    for(int i=2;i<=n;i++){
        vector<int>v = gcd(i);
        int cn = 0;
        for(auto it : v){
            if(prime[it])cn++;
        }
        if(cn==2)count++;
        
    }
    cout<<count<<endl;
    
    return 0;
}