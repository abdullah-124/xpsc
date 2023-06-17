#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c = b-a;
    if(c>0)
        cout<<c+1<<endl;
    else cout<<0<<endl;
    return 0;
}