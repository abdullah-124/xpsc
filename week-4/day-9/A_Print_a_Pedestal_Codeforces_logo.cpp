#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;  cin>>n;
    int a = n/3;
    int b = a;
    int c = a;
    int rem = n % 3;
    rem += 3;
    a--,b--,c--;
    if(rem == 3)a+=2,b+=1;
    else if(rem == 4)a+=3,b+=1;
    else if(rem == 5)a+=3,b+=2;
    cout<<b<<" "<<a<<" "<<c<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}