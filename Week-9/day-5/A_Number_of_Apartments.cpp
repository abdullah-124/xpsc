#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x = n/7;
    for(int i=0;i<=n/3;i++){
        for(int j=0;j<=n/5;j++){
            for(int k=0;k<=n/7;k++){
                if((i*3+j*5+k*7)==n){
                    cout<<i<<" "<<j<<" "<<k<<'\n';
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}