#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a;
    c--;
    ans += (c * b);
    cout<<ans<<endl;
    return 0;
}