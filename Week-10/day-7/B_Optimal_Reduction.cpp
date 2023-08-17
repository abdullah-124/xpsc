#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>a(n);
    int mx = 0,id;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mx <a[i]){
            mx = a[i];
            id = i;
        }
    }
    reverse(a.begin()+id,a.end());
    if(is_sorted(a.begin(),a.begin()+id) and is_sorted(a.begin()+id ,a.end())){
        cout<<"YES\n";
    }else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}