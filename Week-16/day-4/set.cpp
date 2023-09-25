#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<map<int,int>>v;
    map<int,int>s;
    for(int i=0;i<n;i++){
        int k;  cin>>k;
        map<int,int>a;
        for(int j=0;j<k;j++){
            int x;  cin>>x;
            s[x]++;
            a[x]++;
        }
        v.push_back(a);
    }
    int ans = 0;
    for(int i=1;i<=50;i++){
        vector<map<int,int>>tm;
        for(int j=0;j<n;j++){
            if(v[j].find(i)==v[j].end()){
                tm.push_back(v[j]);
            }
        }
        map<int,int>mp;
        for(int j=0;j<tm.size();j++){
            for(auto it: tm[j]){
                mp[it.first]++;
            }
        }
        if(mp.size()!=s.size()){
            ans = max(ans,(int)mp.size());
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;  cin>>t;
    while(t--)solve();
    return 0;
}

/* 
int n;  cin>>n;
vector<int>a[n];
    set<int>st;
    for(int i=0;i<n;i++){
        int k;  cin>>k;
        for(int j=0;j<k;j++){
            int x;  cin>>x;
            a[i].push_back(x);
            st.insert(x);
        }
    }
    //cout<<st.size()<<',';
    int ans = 0;
    for(int k=0;k<n;k++){
        set<int>s;
        for(int i=0;i<n;i++){
            if(k==i)continue;
            for(int j=0;j<a[i].size();j++){
                s.insert(a[i][j]);
            }
            //cout<<s.size()<<' ';
        }
        //for(auto it:s)cout<<it<<' ';
        //cout<<endl;
        if(s.size()!=st.size())ans = max(ans,(int)s.size());
    }
    cout<<ans<<endl;
 */