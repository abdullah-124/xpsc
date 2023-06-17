#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int solve(){
    int fr[26] = {0};
    int n;  cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        char c; cin>>c;
        fr[c - 'A']++;
        if(fr[c-'A']==1)p+=2;
        else p++;
    }
    cout<<p<<endl;

}
int main(){
    fastread()
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}