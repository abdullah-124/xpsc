#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ll s1=0,s2=0,ans=0;
    int j=n-1,i=0;
    while(i<=j){
        if(s1>s2){
            s2 += (ll)a[j];
            j--;
        }
        else {
            s1 += (ll)a[i];
            i++;
        }
        if(s1==s2)ans = s1;
    }
    cout<<ans<<endl;
    return 0;
}