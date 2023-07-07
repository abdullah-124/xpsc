#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    string a;   cin>>a;
    string b;   cin>>b;
    string c;   cin>>c;
    char dif = (b[0] - a[0]);
    for(int i=0;i<n;i++){
        char x = c[i] + dif;
        if(x > 'z'){
            x -= 123;
            x+= 'a';
        }
        
        cout<<x;
    }
    cout<<endl;
    //cout<<c<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}