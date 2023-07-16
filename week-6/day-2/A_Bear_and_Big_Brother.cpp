#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int a,b;    cin>>a>>b;
    int cnt = 0;
    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}