#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    ll mn = LLONG_MAX;
    bool flg = false;
    // vector<pair<int,int>>v(n);
    // for(int i=0;i<n;i++){
    //     v[i] = {a[i],i};
    // }
    // sort(v.begin(),v.end());
    // for(int i=1;i<n;i++){
    //     //cout<<"{"<<v[i].first<<" "<<v[i-1].first<<"} ";
    //     if(v[i-1].first==v[i].first){
    //         ll d = v[i].second -v[i-1].second + 1ll;
    //         mn = min(d,mn);
    //         flg = true;
    //     }
    // }
    map<int,pair<int,int>>mp;
    for(int i=0;i<n;i++){
        if(mp[a[i]].first==0){
            mp[a[i]].first++;
            mp[a[i]].second = i;
        }else if(mp[a[i]].first>0){
            ll d = i-mp[a[i]].second+1ll;
            mn = min(mn,d);
            mp[a[i]].first++;
            mp[a[i]].second = i;
            flg = true;
        }
    }
    if(flg)cout<<(mn)<<endl;
    else cout<<-1<<endl;

}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}