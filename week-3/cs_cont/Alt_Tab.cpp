#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    string st[n];
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>st[i];
        mp[st[i]]++;
    }
    string ans = "";
    for(int i=n-1;i>=0;i--){
        if(mp[st[i]] != 0){
            string t = st[i].substr(st[i].size()-2,2);
            ans += t;
            mp[st[i]] = 0;
        }
    } 
    cout<<ans<<endl;
    return 0;
}