#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,q;    cin>>n>>q;
    vector<ll>arr(n),p(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p[i] = arr[i];
    }
    sort(p.rbegin(),p.rend());
    for(int i=1;i<n;i++){
        //cout<<p[i]<<" ";
        p[i] = p[i] + p[i-1];
        //cout<<p[i]<<" ";
    }
    //cout<<endl;
    while(q--){
        ll k;  cin>>k;
        if(p[n-1]<k){
            cout<<"-1"<<endl;
            continue;
        }
        int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(p[mid - 1] >= k) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
        cout<<ans<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}