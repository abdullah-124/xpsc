#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int oc=0;
    int ans = 0;
    int a[n];
    int id1=1,id0 = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)id1 = i;
        else if(id0==-1)id0 = i;
    }
    if(id0==-1){
        id0 = id1;
        a[id0] =0;
    }else{
        a[id0] = 1;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
        if(a[i]==1)oc++;
        else{
            ans += oc;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}