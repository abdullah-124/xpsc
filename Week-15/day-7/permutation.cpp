#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>mp,cnt;
    for(int i=0;i<n;++i)
        {
            mp[min(n,(a[i]-1)/2)]++;
            if(a[i]<=n)cnt[a[i]]++;
        }
        int k=0,s=0;
        for(int i=n;i>=1;--i)
        {
            s+=mp[i];
            if(cnt[i]==0)
            {
                --s;++k;
                if(s<0){k=-1;break;}
            }
            else --mp[(i-1)/2];
        }
        cout<<k<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}