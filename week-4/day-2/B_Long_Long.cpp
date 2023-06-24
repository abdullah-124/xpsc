#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    bool flg = true;
    ll sum = 0,c=0;
    for(int i=0;i<n;i++){
        int t;  cin>>t;
        sum += abs(t);
        if(t>0)flg = true;
        if(t < 0 && flg){
            c++;
            flg = false;
        }
    }
    cout<<sum<<" "<<c<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}