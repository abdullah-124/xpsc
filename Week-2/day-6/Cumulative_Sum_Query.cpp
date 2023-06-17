#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int q;  cin>>q;
    while(q--){
        int sum = 0;
        int s,e;    cin>>s>>e;
        for(int i=s;i<=e && i<n;i++)sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}