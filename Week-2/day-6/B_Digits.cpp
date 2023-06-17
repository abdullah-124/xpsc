#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n,k,cnt=0;    cin>>n>>k;
    ll b=1;
    while(b<=n){
        cnt++;
        b *= k;
    }
    cout<<cnt<<endl;
    return 0;
}