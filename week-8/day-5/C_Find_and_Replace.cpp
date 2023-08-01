#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    int a[26];
    for(int i=0;i<26;i++)a[i] = -1;
    for(int i=0;i<n;i++){
        int j = s[i]-'a';
        if(a[j]==-1){
            if(a[s[i-1]-'a']==0)a[j] =1;
            else a[j] = 0;
        }
        if(a[s[i-1]-'a']==a[j]){
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