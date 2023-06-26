#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int k,n;    cin>>k>>n;
    int j=1,dif = 1;
    for(int i=1;i<=k;i++){
        cout<<j<<" ";
        if((n-(j+dif))>=(k-(i+1))){
            j += dif,dif++;
        }else j++;
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}