#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,j=0;  cin>>n;
    char arr[n],t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] >= 65 && arr[i]<=90)arr[i]+=32;
    }
    string s = "",demo = "meow";
    while(j<n){
        t = arr[j];
        s += t;
        while(t == arr[j])j++;
    }
    if(s==demo)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}