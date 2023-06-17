#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    for(int i=0;i<n-1;i++){
        string s = "";
        for(int j=0;j<3;j++){
            s+= arr[i+j];
        }
        if(s=="ABC")cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}