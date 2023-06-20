#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,k;    cin>>n>>k;
    map<int,int>occ;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        occ[a[i]]++;
    }
    sort(a, a+n);
    int la = -1, ra = -1;
    int l = -1, r=-1;
    for(int i=0;i<n;i++){
        if(occ[a[i]]<k)continue;
        if(l==-1) l = a[i];
        if(i == n-1 or (a[i+1]-a[i])>1 or occ[a[i+1]]<k){
            r = a[i];
            if((r-l) >= (ra - la)){
                la = l;
                ra = r;
            }
            l = -1,r = -1;
        }
    }
    if(la==-1)cout<<la<<endl;
    else cout<<la<<" "<<ra<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}