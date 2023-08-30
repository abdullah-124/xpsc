#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int cst=INT_MAX,val;
    for(int i=1;i<=100;i++){
        int ans = 0;
        for(int j=0;j<n;j++){
            if(abs(a[j]-i)<=1)continue;
            ans += abs(a[j]-i)-1;
        }
        if(cst>ans){
            cst = ans,val = i;
        }
    }
    cout<<val<<" "<<cst<<endl;
}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}