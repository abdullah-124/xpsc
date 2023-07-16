#include<iostream>
//#include<string>
using namespace std;
int main() {
    // Write C++ code here
    int tt;cin>>tt;
    for(int i=0;i<tt;i++){
        long long n;cin>>n;
        long long ans = (n-1)/2;
        cout<<ans<<endl;
    }
    return 0;
}