#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int c,o,h;  cin>>c>>o>>h;
    vector<int>car(c),otl(o);
    for(int i=0;i<c;i++)cin>>car[i];
    for(int i=0;i<o;i++)cin>>otl[i];
    sort(car.begin(),car.end());
    sort(otl.begin(),otl.end());
    ll mx = 0;
    for(int i=0; i<min(o,c);i++){
        //cout<<mx<<endl;
        mx += min(car[car.size()-1], otl[otl.size()-1]*h);
        car.erase(car.end()-1);
        otl.erase(otl.end()-1);
    }
    cout<<mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}