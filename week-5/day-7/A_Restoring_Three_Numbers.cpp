#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n = 4;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    cout<<abs(ar[3]-ar[0])<<" ";
    cout<<abs(ar[3]-ar[1])<<" ";
    cout<<abs(ar[3]-ar[2])<<"\n";
    return 0;
}