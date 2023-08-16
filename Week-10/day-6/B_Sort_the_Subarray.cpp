#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int l = -1,r = -1;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            r = i;
            if(l = -1)l = i;
        }
    }
    while(l >0 and b[l-1] <= b[l])l--;
    while(r<n-1 and b[r+1]>=b[r])r++;
    cout<<l+1<<" "<<r+1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}