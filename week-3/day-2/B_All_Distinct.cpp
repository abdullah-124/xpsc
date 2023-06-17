<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    int t;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>t;
        mp[t]++; 
    }
    int ans = mp.size();
    if((n-ans)%2)ans--;
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
void solve(){
    int n;  cin>>n;
    int t;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>t;
        mp[t]++; 
    }
    int ans = mp.size();
    if((n-ans)%2)ans--;
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
>>>>>>> ca451056a9aada71eff89a38bbe4415a74704d4a
}