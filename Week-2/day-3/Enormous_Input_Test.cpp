#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;

int main(){
    fastread()
    int n,k,t,cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t%k==0)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}