#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    k = k%(n+1);
    deque<int>dq;
    vector<bool>vis(n+1);
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        dq.push_back(t);
        vis[t] = true;
    }
    int missing = -1;
    for(int i=0;i<=n;i++)if(!vis[i]){
        missing = i;
        break;
    }
    for(int i=0;i<k;i++){
        dq.push_front(missing);
        missing = dq.back();
        dq.pop_back();
    }
    for(int i=0;i<n;i++){
        cout<<dq[i]<<' ';
    }
    cout<<endl;


}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}