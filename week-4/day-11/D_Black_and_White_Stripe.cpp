#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt = 0;
    int i=0;
    int ans = 0;
    while(i<n){
        if(cnt == k)break;
        if(a[i] == 'W'){
            ans++;
            a[i] = 'B';
        }
        cnt++;
        i++;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}