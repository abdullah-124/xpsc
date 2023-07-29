#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int a[n];  
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        int c = 0;
        for(int j=0;j<n;j++){
            if(i<a[j])c++;
        }
        if(i==c){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}