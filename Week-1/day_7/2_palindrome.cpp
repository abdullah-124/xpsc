#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int flag = true;
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]){
            flag = false;
            break;
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}