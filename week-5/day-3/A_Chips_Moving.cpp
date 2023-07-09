#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int main(){
    fastread()
    int n;    cin>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(x%2==0)ans++;
    }
    ans = min(ans, n-ans);
    cout<<ans<<endl;
    return 0;
}