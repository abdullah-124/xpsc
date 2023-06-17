#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    int mn = INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn = min(mn,arr[i]);
    }
    long long eat = 0,x;
    for(int i=0;i<n;i++){
        x = arr[i] - mn;
        eat += x;
    }
    cout<<eat<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}