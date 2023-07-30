#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
 
void solve(){
    int n  = 3;
    char a[3][3];
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        for(int j=0;j<n;j++){
             a[i][j] = s[j];
        }
    }
    int x=-1,y=-1;
    for(int i=0;i<n;i++){
        if(a[i][0]!='.' and a[i][0] == a[i][1] and a[i][1] == a[i][2]){
            x = i,y = 1;
            break;
        }
        else if(a[0][i]!='.' and a[0][i] == a[1][i] and a[1][i] == a[2][i]){
            x = 0, y = i;
            break;
        }
    }
     if(a[0][0] == a[1][1] and a[1][1]== a[2][2]){
        x = 0,y=0;
    }
    else if(a[0][2] == a[2][0] and a[2][0] == a[1][1]){
        x = 0,y=2;
    }
    if(x==-1 or y == -1 or a[x][y] == '.')cout<<"DRAW\n";
    else cout<<a[x][y]<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}