#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    ll sum = 0;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        sum += t;
    }
    if(sum<=0 or (sum-n)<0)cout<<1<<endl;
    else {
        cout<<sum-n<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}