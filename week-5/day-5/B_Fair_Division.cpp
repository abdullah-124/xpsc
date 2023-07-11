#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int cnt[3] = {0};
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        cnt[x]++;
        sum += x;
    }
    if(sum % 2 ==1)cout<<"NO\n";
    else {
        sum /= 2;
        if(sum % 2==0 or (sum %2==1 and cnt[1] >0)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}