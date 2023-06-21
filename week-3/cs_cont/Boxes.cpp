#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll bx = 0;
    ll xr = 0;
    int j=v.size()-1;
    while(j>=0){
        ll elm = v[j];
        j--;
        if(elm > xr){
            xr = 0;
            //xr = xr ^ elm;
            bx++;
        }
        xr = xr^elm;
    }
    cout<<bx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}