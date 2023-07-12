#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

void solve(){
    int n;    cin>>n;
    char a[n];
    int fr[26] = {0};
    int oc=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        fr[a[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(fr[i]%2==1)oc++;
    }
    if(n<=2 or oc <=1){
        cout<<"YES\n";
        return;
    }
    for(int i=1;i<n-1;i++){
        fr[a[i]-'a']--;
        fr[a[i-1]-'a']--;
        fr[a[i+1]-'a']--;
        int odc = 0;
        for(int j=0;j<26;j++){
            if(fr[j] % 2==1)odc++;
            if(odc==2)break;
        }
        if(odc<=1){
            cout<<"YES\n";
            return;
        }
        fr[a[i]-'a']++;
        fr[a[i-1]-'a']++;
        fr[a[i+1]-'a']++;
    }
    cout<<"NO\n";
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solve();
    return 0;
}