#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    set<ll>st;
    for(ll i=1;i<=50;i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    if(st.size()<k)cout<<-1<<endl;
    else{
        int x=0;
        for(auto it:st){
            //cout<<it<<" ";
            if(x==k-1){
                cout<<it<<endl;
                return;
            }
            x++;
        }
    }
    //cout<<endl;
    
}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}