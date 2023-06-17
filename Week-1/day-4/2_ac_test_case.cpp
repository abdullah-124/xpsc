#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m<=0)cout<<"No\n";
    else if(n / m==1 && n%m==0){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}