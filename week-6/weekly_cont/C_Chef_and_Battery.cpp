#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int min = 0;
        if(n==50)cout<<0<<endl;
        else {
            while(n!=50){
                if(n>50){
                    while(n>50){
                        n -= 3;
                        min++;
                        if(n==50)break;
                    }
                }
                if(n<50){
                    while(n<50){
                        n += 2;
                        min++;
                        if(n==50)break;
                    }
                }
            }
            cout<<min<<endl;
        }
    }
    return 0;
}