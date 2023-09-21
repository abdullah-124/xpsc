#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int h = a[0];
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            int x = i+1;
            int d = a[i+1]-a[i];
            int c = d*x;
            if(c>k)break;
            k-=c;
        }
        h = i+1;
    }
    int x = k/n;
    h+=k;
    cout<<h<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}