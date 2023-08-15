#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;cin>>n;
   vector<pair<ll,ll>> v(n);
 
   for(int i=0;i<n;i++) {
       ll x;cin>>x;
       v[i].first=x,v[i].second=i;
   }
   sort(v.rbegin(),v.rend());
   vector<ll> ans(n);
   ll mid=(n+2)/2;
   ll res=0;
   ll left=mid-1,right=mid+1;
   bool isLeft=1;
   for(int i=0;i<n;i++){
       ll idx=v[i].second;
       ll cnt=v[i].first;
       if(isLeft){
          ans[idx]=left; 
          ll cost=2*(mid-left); res+=cnt*cost;
          left--;
          isLeft=0;
       }
       else{
          ans[idx]=right; 
          ll cost=2*(right-mid); res+=cnt*cost;
          right++;
          isLeft=1;
       }
   }
   cout<<res<<endl;
   cout<<mid<<" ";
   for(ll x:ans) cout<<x<<" ";
   cout<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}