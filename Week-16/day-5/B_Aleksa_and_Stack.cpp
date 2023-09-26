#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x=2;
    int a[n+1];
    for(int i=0;i<n;i++){
        a[i] = x;
        x = x+3;
    }
    for(int i=2;i<n;i++){
        int c = a[i-1]+a[i-2];
        if(3*a[i]%c==0){
            cout<<i<<endl;
            return;
        }
    }
    cout<<"tik he\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}