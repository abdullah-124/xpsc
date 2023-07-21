#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n,m,k;  cin>>n>>m>>k;
    int ar[m+1];
    for(int i=0;i<=m;i++)cin>>ar[i];
    int ans = 0;
    for(int i=0;i<m;i++){
        //cout<<__builtin_popcount(ar[i] ^ ar[m])<<" ";
        if(__builtin_popcount(ar[i] ^ ar[m])<=k){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}