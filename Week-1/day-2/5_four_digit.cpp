#include<iostream>
#include<cmath>
using namespace std;
int digitOf(int n){
    return 1+floor(log(n)/log(10));
}
int main(){
    int n;
    cin>>n;
    int dgt = digitOf(n);
    if(dgt==4)cout<<n<<endl;
    else if(dgt==3)cout<<0<<n<<endl;
    else if(dgt==2)cout<<"00"<<n<<endl;
    else cout<<"000"<<n<<endl;
}