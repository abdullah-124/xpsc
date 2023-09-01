#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int cnt=0;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
       int k=1;
       while(true){
        int j = a[i] * k-i;
        //cout<<"("<<j<<" "<<a[i]<<") ";
        if(j>n)break;
        if(j>i and a[j] == k)cnt++;
        k++;
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