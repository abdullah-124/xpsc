#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
using namespace chrono;

void solve(){
    int a,b;    cin>>a>>b;
    a = 100-(100 * a/100);
    b = 200-(200 * b/100);
    if(a<b)cout<<"FIRST\n";
    else if(a>b)cout<<"SECOND\n";
    else cout<<"BOTH\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    auto start1 = high_resolution_clock::now();
    while(t--)solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
    return 0;
}