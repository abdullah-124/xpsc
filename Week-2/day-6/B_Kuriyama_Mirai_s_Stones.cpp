#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    ll arr[n+1];
    ll sorted_ar[n+1];
    arr[0] = 0,sorted_ar[0] = 0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sorted_ar[i] = arr[i];
    }
    sort(sorted_ar,sorted_ar+n+1); 
    
    for(int i=1;i<=n;i++){
        arr[i] += arr[i-1];
        sorted_ar[i] += sorted_ar[i-1];
    }
    int q;  cin>>q;
    while(q--){
        int t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            cout<<arr[r] - arr[l-1]<<endl;
        }
        else {
            cout<<sorted_ar[r] - sorted_ar[l-1]<<endl;
        }
    }
    return 0;
}