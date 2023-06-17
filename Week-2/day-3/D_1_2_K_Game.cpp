#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if((a+b)%2==0)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}