#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int c=1,x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==c)c++;
        c++;
    }
    cout<<c-1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}