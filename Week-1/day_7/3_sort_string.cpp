#include<bits/stdc++.h>
using namespace std;
int fr[26];
int main(){
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        fr[c - 'a']++;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<fr[i];j++){
            char c = 'a' + i;
            cout<<c;
        }
    }
    return 0;
}