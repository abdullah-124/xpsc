#include<iostream>
#include<math.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int tt;  cin>>tt;
    while(tt--){
        int n;  cin>>n;
        int a = sqrt(n);
        int b = n - a;
        if(b%a == 0)
            b /= a;
        else b = (b/a)+1;
        b += a-1;
        cout<<b<<endl;
    }
    return 0;
}