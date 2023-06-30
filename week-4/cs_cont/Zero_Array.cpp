#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==0)continue;
        mp[k]++;
    }
    for(auto it : mp){
        if(it.second > 2 && it.second % 2 == 1 && it.first % 2==0){
            cout<<"NO\n";
            return;
        }
        if(it.second > 2 && it.second % 2 == 0 && it.first % 2==1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}