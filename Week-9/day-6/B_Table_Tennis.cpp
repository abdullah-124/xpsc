#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    ll n,k,a, x=0,cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>x){
            cnt = 1;
            if(i==0)cnt=0;
            x = a;
        }
        else cnt++;
        if(cnt >= k)break;
    }
    cout<<x<<endl;
    return 0;
}