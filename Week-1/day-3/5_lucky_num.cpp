#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,exit = 0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        bool flag = true;
        int num = i;
        while(num>0){
            int dgt = num%10;
            if(dgt != 7 && dgt != 4){
                flag = false;
                break;
            }
            num /= 10;
        }
        if(flag){
            cout<<i<<" ";
            exit = 1;
        }
    }
    if(exit==0)cout<<-1<<endl;
    return 0;
}