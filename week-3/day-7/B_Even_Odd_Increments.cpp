#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,q;    cin>>n>>q;
    int arr[n];
    ll sum = 0;
    int oc = 0,ec = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        if(arr[i]%2==0)ec++;
        else oc++;
    }
    int a,b;
    while(q--){
        cin>>a>>b;
        if(a==0){ 
            sum += (ec*b);
            if(b%2==1){
                oc += ec;
                ec = 0;
            }
        }
        else {
            sum += (oc *b);
            if(b%2==1){
                ec += oc;
                oc = 0;
            }
        }
        cout<<sum<<endl;
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}