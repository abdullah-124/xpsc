#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    int dif = a[0];
    int k = 0;
    while(k<n){
        if(b[k]!=0){
            dif = min(dif,abs(a[k] - b[k]));
        }
        k++;
    }
    //cout<<dif<<" ";
    bool flg = true;
    for(int i=0;i<n;i++){
        if(a[i]<=1 and b[i]<=1)continue;
        if((a[i] - dif) != b[i]){
            flg = false;
            break;
        }
    }
    if(flg)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}