#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,h,m;  cin>>n>>h>>m;
    ll ans = INT_MAX;
    for(int i=0;i<n;i++){
        int hh,mm;  cin>>hh>>mm;
        ll cnt = 0;
        int h1 = h,m1 = m;
        while(true){
            if(h1 == hh && m1 == mm)break;
            else {
                cnt++;
                m1++;
                if(m1 == 60){
                    m1 = 0;
                    h1++;
                }
                if(h1 == 24){
                    h1 = 0;
                }
            }
        }
        ans = min(cnt,ans);
    }
    cout<<ans/60 <<" "<<ans%60<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}