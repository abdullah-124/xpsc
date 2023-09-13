#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int x;  cin>>x;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int l = i+1;
        int r = n-1;
        while(l<r){
            int tgt = (a[i].first+a[l].first+a[r].first);
            if(tgt==x){
                cout<<a[i].second<<' '<<a[l].second<<' '<<a[r].second<<endl;
                return;
            }
        else if(tgt<x)l++;
        else r--;
        }
    }
    cout<<"IMPOSSIBLE\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}