#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i] == 0) reverse(v.begin(),v.begin()+i);
    }
    for(auto it : v)
        cout<<it<<" ";
    return 0;
}