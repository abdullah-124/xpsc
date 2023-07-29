#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>a(n+2);
    int mx = 0,ind;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(mx<a[i])mx=a[i],ind=i;
    }
    vector<pair<int,int>>ans;
    for(int i=2;i<=n;i++){
        if(a[i-1]<=a[i])continue;
        int mn=100,ind;
        for(int j=1;j<=n;j++){
            if(a[j]<0)continue;
            int dif = abs(a[i])-a[j];
            if(mn>dif){
                mn = dif;
                ind = j;
            }
        }
        ans.push_back({i,ind});
        while(a[i-1]>a[i])a[i]+=(abs(a[i])+mn);
    }
    cout<<ans.size()<<"\n";
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
    // for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    // cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}