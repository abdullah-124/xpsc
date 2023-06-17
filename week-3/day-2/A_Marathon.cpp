<<<<<<< HEAD
#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int a,cnt=0,i=3,t;
    cin>>a;
    while(i--){
        cin>>t;
        if(t>a)cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
=======
#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
void solve(){
    int a,cnt=0,i=3,t;
    cin>>a;
    while(i--){
        cin>>t;
        if(t>a)cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
>>>>>>> ca451056a9aada71eff89a38bbe4415a74704d4a
}