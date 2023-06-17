#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;

int main(){
    fastread()
    int n,t;
    cin>>n;
    bool visited[n+1];
    for(int i=1;i<=n;i++){
        cin>>t;
        visited[t] = true;
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}