#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
const int mod = 1e9+7;
int hashing(string s,int base){
    int val = 1;
    int ans = 0;
    for(char c:s){
        int x = c - 'a' + 1;
        ans = ((ans%mod)+(x%mod)*(val%mod))%mod;
        val = ((val%mod) * (base%mod))%mod;
    }
    return ans;
}
int main(){
    fastread()
    int n;  cin>>n;
    set<pair<int,int>>st;
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        st.insert({hashing(s,2),hashing(s,3)});
    }
    int q;  cin>>q;
    for(int i=0;i<q;i++){
        string s;   cin>>s;
        if(st.count({hashing(s,2),hashing(s,3)})>0)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}