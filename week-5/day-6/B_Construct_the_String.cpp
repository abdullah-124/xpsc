#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b,c;  cin>>a>>b>>c;
    for(int i=0;i<a;i++){
        char ch = 'a' + i%c;
        cout<<ch;
    }
    cout<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}