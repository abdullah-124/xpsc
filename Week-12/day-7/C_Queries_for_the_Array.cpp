#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;cin>>s;
    int n=s.size();
    bool ls;
    stack<int>v;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            ls = true;
        }
        else if(s[i]=='1'){
            ls = false;
        }
        else{
            if(s[i]=='+'){
                if(ls)v.push(i);
                else v.push(i+1);
            }
            else if(!v.empty())v.pop();
        }
    }
    while(v.size()){
        cout<<v.top()<<" ";
        v.pop();
    }
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}