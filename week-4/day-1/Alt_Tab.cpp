#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int c,o,h;  cin>>c>>o>>h;
    vector<int>car(c),otl(o);
    for(int i=0;i<c;i++)cin>>car[i];
    for(int i=0;i<o;i++)cin>>otl[i];
    sort(car.rbegin(),car.rend());
    sort(otl.rbegin(),otl.rend());
    ll mx = 0;
    int i=0,j=0;
    while(i<c and j < o){
        mx += min(car[i] , otl[j] * h);
        i++,j++;
    }
    
    cout<<mx<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}