#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>ans;
    ans.push_back(a[0]);
    int cnt=0;
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1])ans.push_back(a[i]);
        else{
            ans.push_back(a[i]);
            ans.push_back(a[i]);
            cnt++;
        }
        cnt++;
    }
    cout<<cnt+1<<endl;
    for(auto it: ans)cout<<it<<" ";
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}