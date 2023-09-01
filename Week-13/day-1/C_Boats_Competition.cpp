#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int ans = -1,id=10;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int x=1;x<=100;x++){
        int cnt = 0;
        int i=0,j=n-1;
        while(i<j){
            if(a[i]+a[j] >x)j--;
            else if(a[i]+a[j]<x)i++;
            else {
                cnt++;
                i++;j--;
            }
        }
        ans = max(cnt,ans);
    }
    cout<<ans<<endl;
   
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}