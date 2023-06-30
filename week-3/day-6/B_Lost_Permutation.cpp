#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    bool visited[3000] = {false};
    int n,s;    cin>>n>>s;
    int arr[n];
    bool flg = true;
    int mx = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        visited[arr[i]] = true;
        mx = max(mx,arr[i]);
    }
    int sum = 0;
    int cur = 1;
    while(true){
        if(visited[cur]){
            cur++;
            continue;
        }
        sum += cur;
        cur++;
        if(sum > s){
            flg = false;
            break;
        }
        if(sum == s){
            for(int i=cur;i<=mx;i++){
                if(!visited[i]){
                    flg = false;
                    break;
                }
            }
            break;
        }
    }
    if(flg)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}