#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int a,b;    cin>>a>>b;
    int dif = abs(a-b);
    if(dif >=2){
        (a>=b)?cout<<"CHEF\n":cout<<"CHEFINA\n";
    }else{
        if(a==b){
            (a&1)?cout<<"CHEF\n":cout<<"CHEFINA\n";
        }
        else{
            int x = min(a,b);
            (x&1)?cout<<"CHEF\n":cout<<"CHEFINA\n";
        }
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}