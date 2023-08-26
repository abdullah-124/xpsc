#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j or j==k)cout<<"1 ";
            else cout<<"0 ";
        }
        k++;
        k = k%n;
        cout<<endl;
    }
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}