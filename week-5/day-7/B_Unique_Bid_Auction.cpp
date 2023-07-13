#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int> cnt(n + 1), idx(n + 1);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ++cnt[x];
        idx[x] = i + 1;
    }
    int ans = -1;
    for (int i = 0; i <= n; ++i) {
        if (cnt[i] == 1) {
            ans = idx[i];
            break;
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