#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
bool check(int x){
    if(x==1 or x==0)return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int vl = s[j]-'0';
            vl += 10*(s[i]-'0');
            //cout<<vl<<" ";
            int ans = check(vl);
            if(ans){
                cout<<vl<<endl;
                return;
            }
        }
    }
    cout<<"-1"<<endl;
}
int main(){
    fastread()
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}