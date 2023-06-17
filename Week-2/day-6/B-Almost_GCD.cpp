#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int n;  cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mx = 0,mxcnt=0;
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(arr[j]%arr[i]==0)cnt++;
        }
        if(cnt>mxcnt){
            mx = arr[i];
            mxcnt = cnt;
        }
        //cout<<arr[i]<<" "<<cnt<<endl;
    }
    cout<<mx<<endl;
    return 0;
}