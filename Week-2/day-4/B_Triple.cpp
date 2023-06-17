#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,mx_append = 0;
    cin>>n;
    int arr[n+1] = {0};
    for(int i=0;i<n;i++){
        int a;  cin>>a;
        arr[a]++;
        if(arr[mx_append]<arr[a])mx_append = a;
    }
    if(arr[mx_append]>=3)cout<<mx_append<<endl;
    else cout<<-1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}