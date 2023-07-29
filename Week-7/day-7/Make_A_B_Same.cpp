#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],b[n];
    int o=0,z=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)o++;
        else z++;
    }
    for(int i=0;i<n;i++)cin>>b[i];
    
    for(int i=0;i<n;i++){
        if(a[i]==1 and b[i]==0){
            cout<<"NO\n";
            return;
        }
        else if(a[i]==0 and b[i]==1){
            if(o==0 or i==0 or i==(n-1)){
                cout<<"NO\n";
                return;
            }
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