#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        if(i%4<2)cout<<"a";
        else cout<<"b";
    }cout<<endl;
    return 0;
}