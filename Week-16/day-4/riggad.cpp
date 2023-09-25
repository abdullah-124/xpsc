#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=1;i<n;i++)
    {
        if(a[i].first >= a[0].first && a[i].second >= a[0].second)
        {
            cout<<"-1\n";
            return;
        }
    }
    cout<<a[0].first<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}