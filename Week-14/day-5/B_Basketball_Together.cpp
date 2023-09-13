#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<int>());
    int i=0,j=n-1,cnt=0;
    while(i<n and a[i]>k)cnt++,i++;
    while(i<j){
        int sum = a[i];
        while(sum <=k and i<j){
            sum += a[i];
            j--;
        }
        if(sum >k)cnt++;
        i++;
    }
    cout<<cnt<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}