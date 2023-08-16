#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int q;  cin>>q;
    int a[n],sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum < q)cout<<-1<<endl;
    else if(sum == q)cout<<0<<endl;
    else{
        int l = 0, h=0;
        int seg =0, ot =0;
        while(h <n){
            while(h<n and seg + a[h] <=q){
                seg += a[h++];
            }
            ot = max(ot, h-l);
            seg -= a[l++];
        }
        cout<<n-ot<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}