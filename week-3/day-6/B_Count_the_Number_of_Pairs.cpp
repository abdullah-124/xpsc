#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,k;    cin>>n>>k;
    string st;   cin>>st;
    int b[26] = {0}, s[26] = {0};
    for(int i=0;i<n;i++){
        if(st[i] >= 'A' && st[i]<='Z')b[st[i] - 'A']++;
        else s[st[i]-'a']++;
    }
    int ans = 0;
    for(int i=0;i<26;i++){
        int pr = min(b[i],s[i]);
        ans += pr;
        b[i] -= pr;
        s[i] -= pr;
        int op = min(k,max(s[i],b[i])/2);
        ans += op;
        k -= op;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}