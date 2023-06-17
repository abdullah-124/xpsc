#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    double discount = 100 - (double)(b*100)/a;
    cout<<discount<<endl;
    return 0;
}