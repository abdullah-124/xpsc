#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    string s;   cin>>s;
    int n = s.size();
    for(int i=0;i<n;i+=2)
        cout<<s[i];
    cout<<endl;
    return 0;
}