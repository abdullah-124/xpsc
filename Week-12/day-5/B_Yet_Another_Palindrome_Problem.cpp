#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];
    //int cnt[5005] = {0};
    //bool flg = false;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            if(a[i] == a[j]){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";

}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}