#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

unordered_map<string,int>mp;
void solve(){
    string s;   cin>>s;
    cout<<mp[s]<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    int id = 1;
    for(char i = 'a';i<='z';i++){
        for(char j = 'a'; j<='z'; j++){
            if(i==j)continue;
            string st = "";
            st+=i;
            st+=j;
            //cout<<st<<" ";
            mp[st] = id;
            id++;
        }
    }
    while(t--)solve();
    return 0;
}