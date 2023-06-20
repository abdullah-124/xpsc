#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    int a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += abs(a[i]);
    }
    int j=0,cnt=0;
    while(j<n){
        if(a[j]<0){
            while(1){
                if(a[j]>0)break;
                j++;
            }
            //j--;
            cnt++;
        }
        j++;
    }
    cout<<sum<<" "<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}