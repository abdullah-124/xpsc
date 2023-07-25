#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n,k,x;    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<endl;
        for(int i=0;i<n;i++)cout<<1<<" ";
        cout<<endl;
    }
    else if(k==1 or (k==2 and n&1)){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        cout<<n/2<<endl;
        int a = n;
        for(int i=0;i<n/2;i++){
            a -= 2;
            cout<<2<<" ";
        }
        if(a)cout<<a;
        cout<<endl;
    }
    
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}