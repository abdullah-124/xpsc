#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    int i=0,j=0;
    int sum = 0,mx=INT_MIN;
    while(j<n){
        sum+=arr[j];
        if(j<k-1)
            j++;
        else{
            mx = max(mx,sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    cout<<mx<<endl;
    return 0;
}