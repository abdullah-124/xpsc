#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    int cv = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i)cv += abs(a[i]-a[i-1]);
    }
    if(cv==0){
        cout<<1<<endl;
        return;
    }
    else{
        int ans = 0;
        n = unique(a,a+n)-a;
        for(int i=1;i<n-1;i++){
            if((a[i]>a[i-1]and a[i]>a[i+1]) or (a[i]<a[i-1] and a[i]<a[i+1]))ans++;
        }
        cout<<ans+2<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}