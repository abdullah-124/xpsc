#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, arr[26]={0},p=0;
        cin>>n;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            arr[c - 'A']++; 
            if(arr[c-'A']==1)p+=2;
            else p++;
        }
        cout<<p<<endl;
    }
    return 0;
}