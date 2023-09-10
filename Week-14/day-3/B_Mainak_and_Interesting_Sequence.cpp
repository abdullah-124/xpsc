#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int m;  cin>>m;
    if(n>m or (n%2==0 and m%2==1)){
        cout<<"NO\n";
        return ;
    }
    int a[n+1];
    int sum = 0;
    if(n%2==0 and m%2==0){
        for(int i=1;i<=n-2;i++){
            a[i] = 1;
            sum ++;
        }
        a[n-1] = (m-sum)/2;
        a[n] = a[n-1];
    }
    else{
        for(int i=1;i<n;i++){
            a[i] = 1;
            sum++;
        }
        a[n] = m-sum;
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}