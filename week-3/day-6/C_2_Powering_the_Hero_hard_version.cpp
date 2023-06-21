#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;
    ll ans=0,t;
    cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t==0 && !pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        pq.push(t);
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}