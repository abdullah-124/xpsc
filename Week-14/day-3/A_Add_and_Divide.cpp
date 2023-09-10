#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b;    cin>>a>>b;
    int cnt = 0;
    if(b==1)cnt++,b++;
    int x = INT_MAX;
    for(int i=b;i<=b+100;i++){
        int tmp = a;
        int now = i-b;
        while(tmp!=0){
            tmp /= i;
            now++;
        }
        x = min(x,now);
    }
    cnt+=x;
    cout<<cnt<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}