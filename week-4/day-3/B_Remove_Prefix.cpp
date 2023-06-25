#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;   
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool cnt[n+1] = {false};
    for(int i=n-1;i>=0;i--){
        if(cnt[a[i]]){
            cout<<i+1<<endl;
            return;
        }
        cnt[a[i]] = true;
    }
    cout<<"0"<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}