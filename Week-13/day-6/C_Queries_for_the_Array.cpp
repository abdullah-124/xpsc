#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            if(v.empty())v.push_back(1);
            else v.push_back(2);
        }
        else if(s[i]=='1'){
            for(int j=(int)v.size()-1;j>=0;j--){
                if(v[j]=='2')v[j]=1;
                else break;
            }
        }
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}