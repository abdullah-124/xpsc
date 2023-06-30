#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    char a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 'L')sum += i;
        else sum += (n-i-1);
        //cout<<sum<<" ";
    }
    ll mxSum = sum;
    int i=0,j=n-1;
    int cnt = -1;
    priority_queue<int>pq;
    while(i<n/2 && j>=n/2){
        if(a[i] == 'L'){
            int mx = n - i - 1;
            mxSum -= i;
            mxSum += mx;
            ll dif = mx - i;
            pq.push(-(dif));
            cnt++;
        }
        if(a[j] == 'R'){
            mxSum -= n - j - 1;
            mxSum += j;
            ll dif = j - (n-j-1);
            pq.push(-(dif));
            cnt++;
        }
        i++,j--;
    }
    ll res[n+1] = {0};
    for(int i=n;i>=0;i--){
        if(cnt<=i)res[i] = mxSum;
        else{
            int top = -1 * pq.top();
            pq.pop();
            res[i] = res[i+1]-top;
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}