#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>x,y;
    string ans(n,'1');
    for(int i=0;i<n;i++){
        if(x.empty())x.push_back(a[i]);
        else if(a[i]>=x.back() and y.empty())x.push_back(a[i]);
        else if(y.empty() and x.front()>=a[i])y.push_back(a[i]);
        else if(x.front()>=a[i] and y.back()<=a[i])y.push_back(a[i]);
        else ans[i] = '0';
    }
    
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}