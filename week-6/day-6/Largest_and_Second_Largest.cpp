#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(a < x and b!=x){
            if(b<a) b = a;
            a = x;
        }
        else if(b<x and a!=x){
            if(b>a)a = b;
            b = x;
        }
    }
    cout<<a+b<<endl;

}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}