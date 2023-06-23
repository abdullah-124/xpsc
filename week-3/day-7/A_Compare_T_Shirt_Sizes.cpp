#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    string a,b; cin>>a>>b;
    if(a==b){
        cout<<"="<<endl;
        return;
    }
    char ca = a.back();
    char cb = b.back();
    if(ca == cb && ca == 'S'){
        if(a.size() > b.size())cout<<"<" <<endl;
        else cout<<">"<<endl;
    }
    else if(ca == cb){
        if(a.size()>b.size())cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    else {
        if(ca>cb)cout<<"<"<<endl;
        else cout<<">"<<endl;
    }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}