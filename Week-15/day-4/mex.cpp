#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k,x;    cin>>k>>x;
    if(n<k or k-1>x){
        cout<<-1<<endl;
        return;
    }
    ll sum=0;
    for(int i=0;i<k;i++){
        sum +=i;
    }
    int i = n-k;
    if(x==k)x--;
    sum += (x*i);
    cout<<sum<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}