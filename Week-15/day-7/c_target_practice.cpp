#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n = 10;
    char a[n+1][n+1];
    map<int,int>mp;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]=='X'){
                if(i==1 or j==1 or i==10 or j==10)mp[1]++;
                else if(i==2 or j==2 or i==9 or j==9)mp[2]++;
                else if(i==3 or j==3 or i==8 or j==8)mp[3]++;
                else if(i==4 or j==4 or i==7 or j==7)mp[4]++;
                else if(i==5 or j==5 or i==6 or j==6)mp[5]++;
            }
        }
    }
    int ans = 0;
    for(auto it: mp){
        //cout<<it.first<<' '<<it.second<<endl;
        ans += (it.first*it.second);
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}