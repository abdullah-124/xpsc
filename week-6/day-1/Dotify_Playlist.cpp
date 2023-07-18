#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k,l;  cin>>n>>k>>l;
	    int a[n],p[n];
	    for(int i=0;i<n;i++)cin>>a[i]>>p[i];
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        if(p[i]==l)v.push_back(a[i]);
	    }
	   if(v.empty() or v.size() <k)cout<<-1<<endl;
       else {
         sort(v.begin(),v.end(),greater<int>());
        ll sum = 0;
        for(int i=0;i<k;i++)sum+=v[i];
            cout<<sum<<endl;
       }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}