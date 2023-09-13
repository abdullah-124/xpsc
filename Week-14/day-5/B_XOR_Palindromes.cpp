#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    int un_match=0,match=0;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-i-1])match+=2;
        else un_match++;
    }
    //cout<<un_match<<' '<<match<<endl;
    vector<int>v;
    for(int i=0;i<=n;i++){
        int tot = i;
        tot -= un_match;
        if(tot<0){
            v.push_back(0);
            continue;
        }
        tot = max((tot%2),tot-match);
        tot = max(0,tot-(n%2));
        if(tot==0)v.push_back(1);
        else v.push_back(0);

    }
    for(auto it:v)cout<<it;
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}