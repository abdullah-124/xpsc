#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    if(n%2 == 0 and n != 2)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}