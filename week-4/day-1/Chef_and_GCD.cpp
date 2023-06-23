#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int gcd(int a,int b){
    if(a==0)return b;
    if(b == 0) return a;
    if(a==b)return a;
    if(a>b)return gcd(a-b,b);
    return gcd(a,b-a);
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        int a,b;    cin>>a>>b;
        a = min(a,b);
        b = max(a,b);
        int gd = gcd(a,b);
        if(gd > 1) cout<<"0"<<endl;
        else {
            int op = a-(b % a);
            cout<<op<<endl;
        }
    }
    return 0;
}