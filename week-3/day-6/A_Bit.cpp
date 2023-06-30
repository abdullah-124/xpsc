#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n,a=0;  cin>>n;
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        if(s == "++X")++a;
        else if(s=="X++")a++;
        else if(s == "--X")--a;
        else a--;
    }
    cout<<a<<endl;
    return 0;
}