#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans(n);
    for (int i = 0, j = 0; i < n; i = j) {
        while (j < n && a[i] == a[j]) j++;
        if (j - i == 1) {
            cout << "-1\n";
            return;
        }
        ans[i] = j - 1;
        for (int k = i + 1; k < j; k++) {
            ans[k] = k - 1;
        }
       
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] + 1 << " \n"[i == n - 1];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}