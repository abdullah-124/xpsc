#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    int cur = 0,cnt=0;
    for(int i=0;i<n;i++){
        if(a[i].second>=cur){
            cnt++;
            cur = a[i].first;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}