#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int ax,ay;  cin>>ax>>ay;
    int bx,by;  cin>>bx>>by;
    int cx,cy;  cin>>cx>>cy;
    int ab = abs(ax-bx)+abs(ay-by);
    int ac = abs(ax-cx)+abs(ay-cy);
    int bc = abs(bx-cx)+abs(by-cy);
    int cnt = (ab+ac-bc)/2;
    cnt++;
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}