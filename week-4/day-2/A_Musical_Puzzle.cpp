#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;  cin>>n;
    string s;   cin>>s;
    bool arr[26][26] = {false};
    int ans = 0;
    for(int i=1;i<n;i++){
        int a = s[i-1] - 'a';
        int b = s[i] - 'a';
        if(arr[a][b])continue;
        else{
            arr[a][b] = true;
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}