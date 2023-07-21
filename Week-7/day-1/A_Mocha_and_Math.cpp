#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,x;    cin>>n;
    int a=-1;
    for(int i=0;i<n;i++){
        cin>>x;
        a = a&x;
    }cout<<a<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}