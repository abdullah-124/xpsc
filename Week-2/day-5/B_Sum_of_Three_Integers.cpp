#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n,s,ans=0;    cin>>n>>s;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
                if(i+j+k==s)ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}