#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int cnt= 1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            while(true){
                i++;
                if(a[i]!=a[i-1])break;
            }
        }
        //i--;
        cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t=1;  //cin>>t;
    while(t--)solve();
    return 0;
}