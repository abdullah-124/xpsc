#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int is_sorted(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])return i-1;
    }
    return -1;
}
void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt= 0;
    while(true){
        int x=is_sorted(a,n);
        if(x==-1)break;
        int m = a[x];
        cnt+=m;
        for(int i=0;i<n;i++){
            a[i] = max(0,(a[i]-m));
            //cout<<a[i]<<" ";
        }
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}