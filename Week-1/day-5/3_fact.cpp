#include<bits/stdc++.h>
using namespace std;
long long dp[22];
long long fact(int n){
    if(n <= 1) return 1;
    if(dp[n]!=0)return dp[n];
    long long ans = n * fact(n-1);
    dp[n] = ans;
    return ans;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        cout<<fact(t)<<endl;
    }
    return 0;
}