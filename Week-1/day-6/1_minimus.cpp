#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int j=0;
    while(j<n){
        int mn = arr[j];
        for(int i=0;i<k && j<n;i++){
            mn = min(mn, arr[j]);
            j++;
        }
        cout<<mn<<" ";
    }
    return 0;
}