#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n+1];
    bool v[n+1] = {false};
    cout<<1<<" ";
    for(int i=2;i<=n;i++){
        if(!v[i]){
            for(int j=i;j<=n;j+=j){
                if(!v[j]){
                    cout<<j<<" ";
                    v[j] = true;
                }
            }
        }
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}