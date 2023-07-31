#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string s;   cin>>s;
    int a[26][26] = {0};
    for(int i=0;i<n-1;i++){
        if(a[s[i]-'a'][s[i+1]-'a']){
            cout<<"YES\n";
            return;
        }
        if(i)a[s[i-1]-'a'][s[i]-'a']=1;
    }
    cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}