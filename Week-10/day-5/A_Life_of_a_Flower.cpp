#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = 1;
    for(int i=0;i<n;i++){
        if(i>0 and a[i]==0 and a[i-1]==0){
            ans = -1;
            break;
        }
        else if(i>0 and a[i]==1 and a[i-1]==1)ans+=5;
        else if(a[i] == 1)ans++;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}