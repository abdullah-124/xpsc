#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n,t;
    cin>>n;
    int a[10] = {0};
    for(int i=0;i<n;i++){
        cin>>t;
        a[t%10]++;
    }
    vector<int>v;
    for(int i=0;i<10;i++){
        for(int j=0;j< min(a[i],3);j++)v.push_back(i);
    }
    n = v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((v[i]+v[j]+v[k])%10==3){
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}