#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int fr[k+1] = {0};
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        fr[t]++;
    }
    for(int i=1;i<=k;i++){
        cout<<fr[i]<<endl;
    }

    return 0;
}