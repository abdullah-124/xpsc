#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    ll sum = 0;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ll now = x;
    for(int i = 0; i < 35; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] % x == 0) {
                sum += now * (a[j] / x);
                a[j] /= x;
            } 
            else {
                cout<<sum<<endl;
                return;
            }
        }
        now *= x;
    }
    cout << sum << '\n';
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}