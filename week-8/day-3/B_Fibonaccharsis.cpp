#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    if(k>30){
        cout<<"0\n";
        return;
    }
    int ans = 0;
    for(int i=0;i<=n;i++){
        int fst = i;
        int scnd = n;
        bool flg = true;
        for(int j=1;j<k-1;j++){
            int tmp = scnd - fst;
            scnd = fst;
            fst = tmp;
            if(fst <= scnd and fst >-1){
                continue;
            }
            else {
                flg = false;
                break;
            }
        }
        if(flg)ans++;
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}