#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int x,y,n;  cin>>x>>y>>n;
    int it=1;
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(y);
        y = y-it;
        it++;
    }
    int m = v.size();
    if(v[m-1]<x){
        cout<<-1<<endl;
        return;
    }
    cout<<x<<" ";
    for(int i=m-2;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}