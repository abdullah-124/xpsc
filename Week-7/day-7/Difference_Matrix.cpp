#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int ar[n][n];
    int x = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ar[i][j] = x;
            x++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            ar[i][j] = x;
            x++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}