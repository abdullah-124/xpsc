#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int t;  
    multiset<int>st;
    for(int i=0;i<n;i++){
        cin>>t;
        st.insert(t);
    }
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}