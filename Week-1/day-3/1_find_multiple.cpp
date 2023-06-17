#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int i=1;
    while(c*i <= b){
        if(c*i >= a && c*i <= b){
            cout<<c*i<<endl;
            return 0;
        }
        i++;
    }
    cout<<-1<<endl;

    return 0;
}