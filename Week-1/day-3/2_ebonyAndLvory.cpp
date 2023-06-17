#include<bits/stdc++.h>
using namespace std;

int main(){
   int a,b,c;
   cin>>a>>b>>c;
   bool flag = false;
   for(int i=0;i<=c/a;i++){
        int n = c - i*a;
        if(n%b==0){
            flag = true;
            break;
        }
   }
   if(flag)cout<<"Yes\n";
   else cout<<"No\n";
}