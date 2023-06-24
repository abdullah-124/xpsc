#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll ans = 0;
        int i=0,j = n-1;
        while(i<j){
            ans += a[j] - a[i];
            i++,j--;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}