#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = n;
    ll seg_sum = 0;
    for(int i=0;i<n;i++){
        seg_sum += a[i];
        int len = 0, mxLen = i+1;
        ll sum = 0;
        int cnt = 1;
        bool possible = false;
        for(int j=i+1;j<n;j++){
            sum += a[j];
            len++;
            if(sum == seg_sum){
                if(j==n-1)possible=true;
                mxLen = max(mxLen,len);
                len = 0;
                cnt++;
                sum = 0;
            }
        }
        //cout<<"for "<<seg_sum<<"->"<<mxLen<<endl;
        if(possible) {
            ans = min(ans,mxLen);
            //cout<<"ans-> "<<ans<<endl;
        }
    }
    //cout<<"--------------\n";
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}