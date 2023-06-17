#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mn = INT_MAX,cnt = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mn > arr[i]){
            mn = arr[i];
            cnt = 0;
            cnt++;
        }
        else if(mn == arr[i])cnt++;
    }
    if(cnt%2)cout<<"Lucky\n";
    else cout<<"Unlucky\n";
    return 0;
}