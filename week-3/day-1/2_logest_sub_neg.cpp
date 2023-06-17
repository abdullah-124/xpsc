#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int sum = 0;
        int ans = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum += a[i];
            if(sum == k) ans = max(ans,i+1);
            if(mp.find(sum - k) != mp.end()){
                int idx = mp[sum-k];
                ans = max(ans,i-idx);
            }
            if(mp.find(sum)==mp.end())
                mp[sum] = i;
        }
        return ans;
    } 
int main(){
    fastread()
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = lenOfLongSubarr(a,n,k);
    cout<<ans<<endl;
    return 0;
}