#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = n,rv = 0;
    while(num>0){
        int dg = num%10;
        rv = rv * 10 + dg;
        num /= 10;
    }
    cout<<rv<<endl;
    if(rv == n){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    return 0;
}