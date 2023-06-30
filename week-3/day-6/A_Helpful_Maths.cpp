#include<iostream>
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    fastread()
    int a[4] = {0};
    string s;   cin>>s;
    int n = s.size();
    int lst = 0;
    for(int i=0;i<n;i++){
        if(s[i] != '+') a[s[i] - '0']++;
        lst = max(lst,s[i] - '0');
    }
    for(int i=1; i<=3;i++){
        for(int j=0;j<a[i];j++){
            if(i == lst && j==a[i]-1)cout<<i<<endl;
            else cout<<i<<"+";
        }
    }
    cout<<endl;
    return 0;
}