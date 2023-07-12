#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int a,b; cin>>a>>b;
    int x,y;    cin>>x>>y;
    int m = 2*a + b;
    int r = 2 * x + y;
    if(m>r)cout<<"Messi\n";
    else if(r>m)cout<<"Ronaldo\n";
    else cout<<"Equal\n";
    return 0;
}