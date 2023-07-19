#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>ans;
    //ans.push_back(0);
    ll sum = 0;
    for(int i=1;i<n;i++){
        ans.push_back(abs(a[i] - a[i-1]));
        sum += abs(a[i]-a[i-1]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<k-1;i++){
        sum -= ans.back();
        ans.pop_back();
    }
    cout<<sum<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}