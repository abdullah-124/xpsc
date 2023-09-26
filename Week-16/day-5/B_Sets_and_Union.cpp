#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    vector<int>a[n];
    set<int>v;
    for(int i=0;i<n;i++){
        int k;  cin>>k;
        a[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>a[i][j];
            v.insert(a[i][j]);
        }
    }
    //cout<<v.size()<<' ';
    // sort(v.begin(),v.end());
    // v.erase(unique(v.begin(),v.end()),v.end());
    //for(auto it:v)cout<<it<<' ';cout<<endl;
    int ans = 0;
    for(int e=1;e<=50;e++){
        set<int>st;
        for(int i=0;i<n;i++){
            bool found = false;
            for(int j=0;j<a[i].size();j++){
                if(a[i][j]==e){
                    found = true;
                    break;
                }
            }
            if(!found){
                for(int j=0;j<a[i].size();j++){
                    st.insert(a[i][j]);
                }
            }
        }
        //for(auto it:st)cout<<it<<' ';cout<<endl;
        if(st.size()!=v.size()){
            ans = max(ans,(int)st.size());
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