#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
bool isValid(int x,int y,int n,int m){
    if(x>0 && y>0 && x<=n && y<=m)return true;
    return false;
}
void solve(){
    
    int n,m;    
    cin>>n>>m;
    int arr[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)arr[i][j] = 0;
            else 
                cin>>arr[i][j];
        }
    }
    int dx[] = {-1,-1,1,1};
    int dy[] = {-1,1,1,-1};
    ll mx_sum = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ll sum = arr[i][j];
            for(int k=0;k<4;k++){
                int x = i + dx[k];
                int y = j + dy[k];
                while(isValid(x,y,n,m)){
                    sum += arr[x][y];
                    x += dx[k];
                    y += dy[k];
                }
            }
            mx_sum = max(sum,mx_sum);
        }
    }
    cout<<mx_sum<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}