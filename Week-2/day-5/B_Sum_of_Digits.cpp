#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
int sumOf(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}
int main(){
    fastread()
    string s;
    cin>>s;
    ll sum =0;
    int n=s.size();
    for(int i=0;i<n;i++){
        sum += (s[i]-48);
    }
    int cnt = 0;
    if(sum == 0 or n==1 )cnt = 0;
    else if(sum<=9)cnt = 1;
    else{
        while(1){
            sum = sumOf(sum);
            cnt++;
            if(sum<=9){
                cnt++;
                break;
            }
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}