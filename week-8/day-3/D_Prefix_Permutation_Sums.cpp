#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    ll n;    cin>>n;
    vector<ll>a(n+1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    ll total = n*(n+1)/2;
    if(total<a[n-2]){
        cout<<"NO\n";
        return;
    }
    if(a[n-2]!=total){
        a[n-1] = total;
        vector<ll>ar;
        for(int i=n-2;i>=0;i--){
            ar.push_back(a[i+1] - a[i]);
        }
        ar.push_back(a[0]);
        bool flg = true;
        vector<bool>visited(n+1,false);
        for(int i=0;i<n;i++){
            if(ar[i]>n or visited[ar[i]]==true){
                flg = false;
                break;
            }
            visited[ar[i]] = true;
        }
        if(flg)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else {
        vector<bool>visited(n+1,false);
        vector<ll>sum;
        for(int i=0;i<n-1;i++){
            if(i==0){
                sum.push_back(a[i]);
                if(a[i]<=n)visited[a[i]] = true;
                
            }
            else{
                sum.push_back(a[i]-a[i-1]);
                if(a[i]-a[i-1]<=n){
                    visited[a[i]-a[i-1]]=true;
                }

            }
        }
        vector<ll>mis;
        for(int i=1;i<=n;i++){
            if(!visited[i])mis.push_back(i);
        }
        if(mis.size()!=2){
            cout<<"NO\n";
            return;
        }
        bool flg = false;
        for(auto i : sum){
            if(mis[0]+mis[1]==i){
                flg = true;
                break;
            }
        }
        if(flg)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}