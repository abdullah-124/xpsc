#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
#define ys cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

//O(n^2)
void solves(){
    int n;      cin>>n;
    int ar[n];
    char c[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){
        if(ar[i]==ar[j] and c[i] != c[j]){
            no;
            return;
        }
    }
    ys;
}
int main(){
    fastread()
    int t;  cin>>t;
    while(t--)solves();
    return 0;
}