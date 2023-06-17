#include<bits/stdc++.h>
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;
void solve(){
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    string arr[3][n];
    int p[3] = {0};
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            mp[arr[i][j]]++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(mp[arr[i][j]] ==1)
                p[i] += 3;
            else if(mp[arr[i][j]]==2)
                p[i] += 1;
        }
    }
    for(int i=0;i<3;i++)
        cout<<p[i]<<" ";
    cout<<endl;
}
int main(){
    fast();
    int t;  cin>>t;
    while(t--)solve();

    return 0;
}