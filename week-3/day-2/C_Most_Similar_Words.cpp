<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
  
int cal_df(string s1,string s2){
    int df = 0;
    int n = s1.size();
    for(int i=0;i<n;i++){
        df += abs(s1[i] - s2[i]);
    }
    //cout<<s1<<"--> "<<s2<<" "<<df<<endl;
    return df;
}
void solve(){
    //cout<<"HEI\n";
    int n,m;  
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans = 100000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans = min(ans, cal_df(v[i],v[j]));
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
=======
#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
  
int cal_df(string s1,string s2){
    int df = 0;
    int n = s1.size();
    for(int i=0;i<n;i++){
        df += abs(s1[i] - s2[i]);
    }
    //cout<<s1<<"--> "<<s2<<" "<<df<<endl;
    return df;
}
void solve(){
    //cout<<"HEI\n";
    int n,m;  
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans = 100000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans = min(ans, cal_df(v[i],v[j]));
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
>>>>>>> ca451056a9aada71eff89a38bbe4415a74704d4a
}