#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    int i=1,j=n;
    while(j>i){
        if(abs(i-j)>=k)swap(arr[j],arr[i]);
        i++,j--;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}