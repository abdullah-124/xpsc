#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int q;  cin>>q;
    for(int i=0;i<q;i++){
        int k;  cin>>k;
        auto lb = lower_bound(a.begin(),a.end(),k);
        auto ub = upper_bound(a.begin(),a.end(),k);
        if((lb!=a.begin()))cout<<(a[lb-a.begin()-1])<<" ";
        else cout<<"X ";
        if(ub != a.end())cout<<(a[ub - a.begin()])<<'\n';
        else cout<<"X\n";
    }
}
int main(){
    fastread()
    solve();
    return 0;
}