#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(ar[i]==ar[j])c++;
            if(c==2)break;
        }
        if(c==1){
            cout<<i+1<<endl;
            return;
        }
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}