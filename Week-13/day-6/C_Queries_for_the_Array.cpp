#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(v.empty())continue;
            if(v.back()==0){
                cout<<"NO\n";
                return;
            }
            for(int j=(int)v.size()-1;j>=0;j--){
                if(v[j]==2)
                    v[j] = 1;
                else break;
            }
        }
        else if(s[i]=='0'){
            if(v.empty() || v.back()==1)
            {
                cout<<"NO\n";
                return;
            }
            v.back() = 0;
        }
        else if(s[i]=='+') {
            if(v.empty())v.push_back(1);
            else{
                if(v.back()==1)
                    v.push_back(2);
                else
                    v.push_back(v.back());
            }
        }
        else v.pop_back();
        
    }
    cout<<"YES\n";
    
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}