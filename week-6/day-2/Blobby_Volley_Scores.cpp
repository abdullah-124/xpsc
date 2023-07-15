#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        char x;cin>>x;
        if(c==0){
            if(x == 'A')a++;
            else c++;
        }
        else {
            if(x=='B')b++;
            else c=0;
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}