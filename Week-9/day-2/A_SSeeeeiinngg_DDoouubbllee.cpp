#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    char a[2*n];
    int l=0,r=2*n-1,i=0;
    while(i<n){
        a[l] = s[i];
        a[r] = s[i];
        l++,r--,i++;
    }
    for(int i=0;i<n*2;i++)cout<<a[i];
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}