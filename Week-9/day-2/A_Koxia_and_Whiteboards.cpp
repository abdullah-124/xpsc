#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    vector<int> a(n),p(k);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++)cin>>p[i];
    for(int i=0;i<k;i++){
        int mn=1e9,x=0;
		for(int j=0;j<n;j++){
			if(a[j]<mn)mn=a[j],x=j;
		}
		a[x]=p[i];
    }
    ll sum = 0;
    for(int i=0;i<n;i++)sum+=a[i];
    cout<<sum<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}