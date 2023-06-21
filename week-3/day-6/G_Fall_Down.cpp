#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,m;    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        for(int j=0;j<m;j++){
            arr[i][j] = s[j];
        }
    }
    for(int i=0;i<m;i++){
        int j=n-1,k=n-1;
        while(j>=0 && k>=0){
            while(arr[j][i] != '.'&&j>=0)j--;
            k = j-1;
            while(k>=0 && arr[k][i]!='*'){
                if(arr[k][i]=='o'){
                    j = k;
                    break;
                }
                k--;
            }
            if(k>=0 && j>=0)swap(arr[k][i],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }cout<<endl;
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}