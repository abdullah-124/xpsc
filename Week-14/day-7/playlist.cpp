#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int cnt = 0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        set<int>st;
        int j=i;
        while(st.count(a[j])==0 and j<n)st.insert(a[j]),j++;
        cnt = max(cnt, (j-i));
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