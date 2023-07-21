#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a,b,ans=0,anss;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(a<=10){
            if(b>ans){
                ans = b;
                anss = i;
            }
        }
    }
    cout<<anss<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}