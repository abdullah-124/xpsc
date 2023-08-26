#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int cnt[100005] = {0};
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        cnt[x]++;
    }
    int ans = 1;
    for(int i=2;i<=1e5;i++){
        int x = 0;
        for(int j=i;j<=1e5;j+=i){
            x += cnt[j];
        }
        ans = max(ans,x);
    }
    cout<<ans<<endl;
    return 0;
}