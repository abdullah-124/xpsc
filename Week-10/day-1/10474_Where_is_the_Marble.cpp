#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;


int main(){
    fastread()
    int n,q,cs=1;   
    while(cin>>n>>q){
        if(n==0 and q==0)break;;
        cout<<"CASE# "<<cs<<":\n";
        cs++;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        // cout<<"ARRAY-> :";
        // for(int i=0;i<n;i++)cout<<a[i]<<" ";
        //cout<<endl;
        for(int i=0;i<q;i++){
            int k;  cin>>k;
            auto it = lower_bound(a.begin(),a.end(),k)-a.begin() ;
            if(a[it] == k)cout<<k<<" found at "<<(it+1)<<'\n';
            else cout<<k<<" not found\n";
        }
    }
    return 0;
}