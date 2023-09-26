#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    bool flg = false;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(x==k)flg  = true;
    }
    flg? cout<<"YES\n" : cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}