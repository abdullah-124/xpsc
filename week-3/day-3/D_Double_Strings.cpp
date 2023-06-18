#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    string arr[n];
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        bool flg = false;
        int len = arr[i].size();
        for(int j=1;j<=len;j++){
            string l = arr[i].substr(0,j);
            string r = arr[i].substr(j,len-1);
            //cout<<l<<" "<<r<<endl;
            if(mp[l] && mp[r]){
                flg = true;
                break;
            }
        }
        if(flg)cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}