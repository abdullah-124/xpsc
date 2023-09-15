#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int cnt[26] = {0};
    int n = s.size();
    for(int i=0;i<n;i++){
        cnt[s[i]-'A']++;
    }
    int od_cnt=0;
    char x = '*';
    for(int i=0;i<26;i++){
        if(cnt[i]%2){
            od_cnt++;
            x = ('A'+i);
        }
        if(od_cnt>1){
            cout<<"NO SOLUTION\n";
            return;
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<(cnt[i]/2);j++){
            char a = 'A'+i;
            cout<<a;
        }
    }
    if(x!='*')cout<<x;
    for(int i=25;i>=0;i--){
        for(int j=0;j<(cnt[i]/2);j++){
            char a = 'A'+i;
            cout<<a;
        };
    }
    cout<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}