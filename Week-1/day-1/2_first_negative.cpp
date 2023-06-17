#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>k;
    queue<int>q;
    int i=0,j=0;
    while(j<n){
        if(arr[j]<0)q.push(arr[j]);
        if(j<k-1)j++;
        else{
            if(q.empty())cout<<"0 ";
            else cout<<q.front()<<" ";
            if(arr[i]<0)q.pop();
            i++;j++;
        }
    }
    return 0;
}