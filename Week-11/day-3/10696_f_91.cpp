#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int solve(int n){
    if(n<=100)return 91;
    else return n-10;
    
}
int main(){
    fastread()
    while(true){
        int n;  cin>>n;
        if(n==0)break;
        int x = solve(n);
        cout<<"f91("<<n<<") = "<<x<<endl;
    }
    return 0;
}