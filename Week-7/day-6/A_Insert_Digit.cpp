#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    int k;  cin>>k;
    char a[n+1];
    bool x = true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(x&&(a[i]-'0')<k){
            a[i+1] = a[i];
            a[i] = k+'0';
            i++;
            n++;
            x=false;
        }
    }
    if(x)a[n] = k+'0',n++;
    for(int i=0;i<n;i++)cout<<a[i];
    cout<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}