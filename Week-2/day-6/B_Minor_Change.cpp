#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    string a,b; cin>>a>>b;
    int cnt=0;
    int n = max(a.size(),b.size());
    for(int i=0;i<n;i++){
        if(a[i] != b[i])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}