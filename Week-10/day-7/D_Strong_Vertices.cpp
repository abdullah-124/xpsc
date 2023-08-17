#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int mx = INT_MIN;
    for(int i=0;i<n;i++)mx = max(mx, a[i]-b[i]);
    int cnt = 0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(a[i]-b[i]==mx)cnt++,ans.push_back(i+1);
    }
    cout<<cnt<<endl;
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}