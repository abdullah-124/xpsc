#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll sum = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum == 0)cout<<"NO\n";
    else{
        cout<<"YES\n";
        sort(a,a+n);
        if(sum > 0){
            reverse(a,a+n);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}