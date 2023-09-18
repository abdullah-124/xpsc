#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int x = -1;
    for(int i=0;i<n;i++)if(i<a[i]){
        x = i;
        break;
    }
    if(x==-1)x = n;
    int bob = 1e9,turn =0;
    bool alc = true;
    while(1){
        if(turn>(2*n)+1 or bob ==-1)break;
        if(alc){
            if(bob <=x){
                cout<<bob<<endl;
                cout.flush();
            }
            else {
                cout<<x<<endl;
                cout.flush();
            }
        }
        else cin>>bob;
        alc^=1;
        turn++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}