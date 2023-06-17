#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int mx_coin = 0;
    for(int i=0;i<2;i++){
        if(a>b){
            mx_coin+=a;
            a--;
        }
        else{
            mx_coin+=b;
            b--;
        }
    }
    cout<<mx_coin<<endl;
    return 0;
}