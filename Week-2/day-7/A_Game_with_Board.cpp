#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        if(n>4)cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    return 0;
}