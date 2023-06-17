#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>k;
    int i=0,j=0;
    multiset<int>ml;                                
    while(j<n){
        ml.insert(arr[j]);
        if(j<k-1)j++;
        else{
            auto mx = ml.rbegin();
            cout<<*mx<<" ";
            auto it = ml.find(arr[i]);
            i++;
            j++;
        }
    }
    return 0;
}