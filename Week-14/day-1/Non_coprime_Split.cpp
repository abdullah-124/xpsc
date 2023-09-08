#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int l,r;    cin>>l>>r;
    if (l == r) {
        for(int i=2;i*i<=r;i++){
            if(l%i==0 and l-i>=2){
                cout<<i<<" "<<(l-i)<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    }
    else if (r < 4) {
        cout << "-1\n";
        return;
    }
    else cout << "2 " << (r-r%2)-2 <<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}