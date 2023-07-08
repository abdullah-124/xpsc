#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v[i] != -1){
            ll tgt = (ll) v[i] * k;
            int idx = -1;
            int l = i+1,r = n-1,mid =0;
            while(l<=r){
                mid = l + (r-l)/2;
                if(tgt == v[mid]) {
                    idx = mid;
                    r = mid -1;
                }
                else if(tgt < v[mid]){
                    r = mid - 1;
                }
                else l = mid + 1;
                
            }
            if(idx == -1)ans++;
            else v[idx] = -1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}