#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<vector<int>>a(2,vector<int>(n));
    a[0][0] = 2*n;
    a[1][n-1] = (2*n)-1;
    int x = 1;
    for(int i=0;i<n;i++){
        a[(i+1)%2][i] = x;
        x++;
    }
    x = (2*n)-2;
    for(int i=2;i<n;i+=2){
        a[0][i] = x;
        a[1][i-1] = x-1;
        x -= 2;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}