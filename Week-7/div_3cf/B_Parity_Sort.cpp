#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int>a = v;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(v[i]%2==1 and a[i]%2==0){
            cout<<"NO\n";
            return;
        }
        if(v[i]%2==0 and a[i]%2==1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}