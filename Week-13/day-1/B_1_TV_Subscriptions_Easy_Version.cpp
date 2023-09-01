#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k,d;    cin>>k>>d;
    map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int i=0,j=0;
    int cnt =0,ans = INT_MAX;
    int episode = 0;
    while(j<n){
        if(j-i<d){
            if(mp[a[j]]==0)cnt++;
            mp[a[j]]++;
            j++;
        }
        else{
            ans = min(cnt,ans);
            mp[a[i]]--;
            //for(int x=i;x<j;x++)cout<<a[x]<<" ";
           // cout<<"cnt -> "<<cnt<<endl;
            if(mp[a[i]]<=0)cnt--;
            i++;
        }
    }
    ans = min(ans,cnt);

    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}