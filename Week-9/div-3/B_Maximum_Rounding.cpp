#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    if((s[0]-'0')>=5){
        cout<<1;
        for(int i=0;i<n;i++)cout<<0;
        cout<<endl;
    }
    else{
        int r = n;
        for(int i=n-1;i>0;i--){
            int x = s[i] - '0';
            if(x>=5){
                s[i-1]++;
                r = i;
            }
        }
        if((s[0]-'0')>=5){
            cout<<1;
            for(int i=0;i<n;i++)cout<<0;
            cout<<endl;
        }
        else {
            for(int i=0;i<r;i++)cout<<s[i];
            for(int i=r;i<n;i++)cout<<0;
            cout<<endl;
        }
    }
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}