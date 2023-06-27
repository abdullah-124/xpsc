#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"="<<endl;
        return;
    }
    char x = a.back();
    char y = b.back();
    if(x==y && x=='S'){
        if(a.size()>b.size())cout<<"<";
        else cout<<">";
    }
    else if(x==y){
        if(a.size()>b.size())cout<<">";
        else cout<<"<";
    }
    else {
        if(x>y)cout<<"<";
        else cout<<">";
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}