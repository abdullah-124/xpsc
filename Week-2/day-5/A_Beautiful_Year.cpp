#include<bits/stdc++.h>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;
bool check(int n){
    int arr[10] = {0};
    bool flg = true;
    while(n>0){
        int d = n%10;
        arr[d]++;
        if(arr[d]>1){
            flg = false;
            break;
        }
        n = n/10;
    }
    return flg;
}
int main(){
    fastread()
    int n;
    cin>>n;
    while(1){
        bool isDistinct = check(++n);
        if(isDistinct){
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}