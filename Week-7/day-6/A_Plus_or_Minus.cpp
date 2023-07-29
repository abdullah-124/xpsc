#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        int a,b,c;  cin>>a>>b>>c;
        if(a+b==c)cout<<'+'<<'\n';
        else cout<<'-'<<'\n';
    }
    return 0;
}